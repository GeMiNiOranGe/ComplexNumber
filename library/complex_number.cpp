#include <matho/complex_number.hpp>

namespace matho {

ComplexNumber::ComplexNumber(double real, double imaginary) {
    this->real_ = real;
    this->imaginary_ = imaginary;
}

ComplexNumber::ComplexNumber(const ComplexNumber & complex_number) {
    this->real_ = complex_number.real_;
    this->imaginary_ = complex_number.imaginary_;
}

ComplexNumber::ComplexNumber(ComplexNumber && complex_number) {
    this->real_ = std::exchange(complex_number.real_, 0.0);
    this->imaginary_ = std::exchange(complex_number.imaginary_, 0.0);
}

ComplexNumber::~ComplexNumber() {
}

double ComplexNumber::get_real() const {
    return this->real_;
}

double ComplexNumber::get_imaginary() const {
    return this->imaginary_;
}

void ComplexNumber::set_real(double real) {
    this->real_ = real;
}

void ComplexNumber::set_imaginary(double image) {
    this->imaginary_ = image;
}

std::string ComplexNumber::to_string() const {
    /*
    TODO: Possible output formats to support in the future:
    - Mathematical format: "a + bi"
    - Parser-friendly format: "a+bi" (no spaces)
    - UI format: "Re: a, Im: b"
    - Fraction format: using the Fraction library. It’s elegant and avoids
      overflow or precision issues with the double type
    - Scientific format: scientific notation for floating-point values
    */

    std::stringstream result;

    if (this->real_ == 0 && this->imaginary_ == 0) {
        result << 0;
        return result.str();
    }

    if (this->real_ == 0) {
        result << this->imaginary_ << "i";
    }
    else {
        if (this->imaginary_ == 0) {
            result << this->real_;
        }
        else if (this->imaginary_ == 1) {
            result << this->real_ << "+i";
        }
        else if (this->imaginary_ == -1) {
            result << this->real_ << "-i";
        }
        else if (this->imaginary_ < 0) {
            result << this->real_ << this->imaginary_ << "i";
        }
        else {
            result << this->real_ << "+" << this->imaginary_ << "i";
        }
    }

    return result.str();
}

ComplexNumber & ComplexNumber::operator=(ComplexNumber && complex_number) {
    if (this == &complex_number) {
        return *this;
    }
    this->real_ = std::exchange(complex_number.real_, 0.0);
    this->imaginary_ = std::exchange(complex_number.imaginary_, 0.0);
    return *this;
}

std::istream &operator>>(std::istream &istr, ComplexNumber &val) {
    double real, imaginary;
    istr >> real >> imaginary;
    val.set_real(real);
    val.set_imaginary(imaginary);
    return istr;
}

std::ostream &operator<<(std::ostream &ostr, const ComplexNumber &val) {
    ostr << val.to_string();
    return ostr;
}

ComplexNumber &operator+=(ComplexNumber & left, const ComplexNumber & right) {
    left.set_real(left.get_real() + right.get_real());
    left.set_imaginary(left.get_imaginary() + right.get_imaginary());
    return left;
}

ComplexNumber &operator-=(ComplexNumber & left, const ComplexNumber & right) {
    left.set_real(left.get_real() - right.get_real());
    left.set_imaginary(left.get_imaginary() - right.get_imaginary());
    return left;
}

ComplexNumber &operator*=(ComplexNumber & left, const ComplexNumber & right) {
    double a = left.get_real(), b = left.get_imaginary();
    double c = right.get_real(), d = right.get_imaginary();
    left.set_real(a * c - b * d);
    left.set_imaginary(a * d + b * c);
    return left;
}

ComplexNumber &operator/=(ComplexNumber & left, const ComplexNumber & right) {
    double a = left.get_real(), b = left.get_imaginary();
    double c = right.get_real(), d = right.get_imaginary();
    left.set_real((a * c + b * d) / (c * c + d * d));
    left.set_imaginary((b * c - a * d) / (c * c + d * d));
    return left;
}

ComplexNumber &operator+=(ComplexNumber & left, double right) {
    left.set_real(left.get_real() + right);
    return left;
}

ComplexNumber &operator-=(ComplexNumber & left, double right) {
    left.set_real(left.get_real() - right);
    return left;
}

ComplexNumber &operator*=(ComplexNumber & left, double right) {
    left.set_real(left.get_real() * right);
    left.set_imaginary(left.get_imaginary() * right);
    return left;
}

ComplexNumber &operator/=(ComplexNumber & left, double right) {
    double a = left.get_real(), b = left.get_imaginary();
    double c = right;
    left.set_real((a * c) / (c * c));
    left.set_imaginary((b * c) / (c * c));
    return left;
}

} // namespace matho
