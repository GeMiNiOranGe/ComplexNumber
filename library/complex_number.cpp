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
    ostr << val.get_real() << "+" << val.get_imaginary() << "i";
    return ostr;
}

} // namespace matho
