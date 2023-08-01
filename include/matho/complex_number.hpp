#pragma once
#ifndef COMPLEX_NUMBER_HPP
#define COMPLEX_NUMBER_HPP

#include <iostream>
#include <sstream>

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

    double abs() const;
    ComplexNumber conjugate() const;

    // TODO: Considering support for `parse` and `try_parse`
    std::string to_string() const;

    ComplexNumber & operator=(const ComplexNumber & complex_number) = default;
    ComplexNumber & operator=(ComplexNumber && complex_number);
};

std::istream & operator>>(std::istream & istr, ComplexNumber & val);
std::ostream & operator<<(std::ostream & ostr, const ComplexNumber & val);

#pragma region Binary arithmetic operators with another complex number
ComplexNumber & operator+=(ComplexNumber & left, const ComplexNumber & right);

ComplexNumber & operator-=(ComplexNumber & left, const ComplexNumber & right);

ComplexNumber & operator*=(ComplexNumber & left, const ComplexNumber & right);

ComplexNumber & operator/=(ComplexNumber & left, const ComplexNumber & right);

inline ComplexNumber
operator+(const ComplexNumber & left, const ComplexNumber & right) {
    ComplexNumber result = left;
    result += right;
    return result;
}

inline ComplexNumber
operator-(const ComplexNumber & left, const ComplexNumber & right) {
    ComplexNumber result = left;
    result -= right;
    return result;
}

inline ComplexNumber
operator*(const ComplexNumber & left, const ComplexNumber & right) {
    ComplexNumber result = left;
    result *= right;
    return result;
}

inline ComplexNumber
operator/(const ComplexNumber & left, const ComplexNumber & right) {
    ComplexNumber result = left;
    result /= right;
    return result;
}
#pragma endregion

#pragma region Binary arithmetic operators with a number on the right-hand side
ComplexNumber & operator+=(ComplexNumber & left, double right);

ComplexNumber & operator-=(ComplexNumber & left, double right);

ComplexNumber & operator*=(ComplexNumber & left, double right);

ComplexNumber & operator/=(ComplexNumber & left, double right);

inline ComplexNumber operator+(const ComplexNumber & left, double right) {
    ComplexNumber result = left;
    result += right;
    return result;
}

inline ComplexNumber operator-(const ComplexNumber & left, double right) {
    ComplexNumber result = left;
    result -= right;
    return result;
}

inline ComplexNumber operator*(const ComplexNumber & left, double right) {
    ComplexNumber result = left;
    result *= right;
    return result;
}

inline ComplexNumber operator/(const ComplexNumber & left, double right) {
    ComplexNumber result = left;
    result /= right;
    return result;
}
#pragma endregion

#pragma region Binary arithmetic operators with a number on the left-hand side
inline ComplexNumber operator+(double left, const ComplexNumber & right) {
    ComplexNumber result(left);
    result += right;
    return result;
}

inline ComplexNumber operator-(double left, const ComplexNumber & right) {
    ComplexNumber result(left);
    result -= right;
    return result;
}

inline ComplexNumber operator*(double left, const ComplexNumber & right) {
    ComplexNumber result(left);
    result *= right;
    return result;
}

inline ComplexNumber operator/(double left, const ComplexNumber & right) {
    ComplexNumber result(left);
    result /= right;
    return result;
}
#pragma endregion

#pragma region Comparison operators with another complex number
inline bool
operator==(const ComplexNumber & left, const ComplexNumber & right) {
    return left.get_real() == right.get_real()
           && left.get_imaginary() == right.get_imaginary();
}

inline bool
operator!=(const ComplexNumber & left, const ComplexNumber & right) {
    return !operator==(left, right);
}
#pragma endregion

#pragma region Comparison operators with a number on the right-hand side
inline bool operator==(const ComplexNumber & left, double right) {
    return left.get_real() == right && left.get_imaginary() == 0.0;
}

inline bool operator!=(const ComplexNumber & left, double right) {
    return !operator==(left, right);
}
#pragma endregion

#pragma region Comparison operators with a number on the left-hand side
inline bool operator==(double left, const ComplexNumber & right) {
    return left == right.get_real() && 0.0 == right.get_imaginary();
}

inline bool operator!=(double left, const ComplexNumber & right) {
    return !operator==(left, right);
}
#pragma endregion

}  // namespace matho

#endif  // end COMPLEX_NUMBER_HPP
