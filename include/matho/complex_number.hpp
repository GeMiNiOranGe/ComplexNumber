#pragma once
#ifndef COMPLEX_NUMBER_HPP
#define COMPLEX_NUMBER_HPP

#include <iostream>

namespace matho {

class ComplexNumber {
private:
    double real_, imaginary_;

public:
    explicit ComplexNumber(double real = 0.0, double imaginary = 0.0);
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

#pragma region Binary arithmetic operators with another complex number
ComplexNumber &operator+=(ComplexNumber & left, const ComplexNumber & right);

inline ComplexNumber operator+(
    const ComplexNumber & left,
    const ComplexNumber & right
) {
    ComplexNumber result = left;
    result += right;
    return result;
}
#pragma endregion

#pragma region Binary arithmetic operators with a number on the right-hand side
ComplexNumber &operator+=(ComplexNumber & left, double right);

inline ComplexNumber operator+(const ComplexNumber & left, double right) {
    ComplexNumber result = left;
    result += right;
    return result;
}
#pragma endregion

#pragma region Binary arithmetic operators with a number on the left-hand side
inline ComplexNumber operator+(double left, const ComplexNumber & right) {
    ComplexNumber result(left);
    result += right;
    return result;
}
#pragma endregion

} // namespace matho

#endif // end COMPLEX_NUMBER_HPP
