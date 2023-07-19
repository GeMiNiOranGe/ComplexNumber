#pragma once
#ifndef COMPLEX_NUMBER_HPP
#define COMPLEX_NUMBER_HPP

#include <iostream>

namespace matho {

class ComplexNumber {
private:
    double real_, imaginary_;

public:
    ComplexNumber(double real = 0.0, double imaginary = 0.0);
    ComplexNumber(const ComplexNumber & complex_number);
    ComplexNumber(ComplexNumber && complex_number);
    ~ComplexNumber();

    double get_real() const;
    double get_imaginary() const;

    void set_real(double real);
    void set_imaginary(double imaginary);

    ComplexNumber & operator=(const ComplexNumber & complex_number) = default;
    ComplexNumber & operator=(ComplexNumber && complex_number);
};

std::istream &operator>>(std::istream &istr, ComplexNumber &val);
std::ostream &operator<<(std::ostream &ostr, const ComplexNumber &val);

} // namespace matho

#endif // end COMPLEX_NUMBER_HPP
