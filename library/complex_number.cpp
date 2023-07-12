#include <matho/complex_number.hpp>

namespace matho {

ComplexNumber::ComplexNumber(double real, double imaginary) {
    this->real_ = real;
    this->imaginary_ = imaginary;
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
