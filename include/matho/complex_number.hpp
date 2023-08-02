#pragma once
#ifndef COMPLEX_NUMBER_HPP
#define COMPLEX_NUMBER_HPP

#include <iostream>
#include <sstream>

namespace matho {

/**
 * @brief Represents a complex number with real and imaginary components.
 *
 * This class provides basic operations for complex numbers including
 * construction, copying, moving, computing magnitude, obtaining the conjugate,
 * and converting to string format.
 */
class ComplexNumber {
private:
    double real_, imaginary_;

public:
    /**
     * @brief Constructs a ComplexNumber with the specified real and imaginary
     * parts.
     * @param real The real component of the complex number.
     * @param imaginary The imaginary component of the complex number.
     */
    explicit ComplexNumber(double real = 0.0, double imaginary = 0.0);

    /**
     * @brief Copy constructor. Creates a new ComplexNumber as a copy of
     * another.
     * @param complex_number The ComplexNumber instance to copy from.
     */
    ComplexNumber(const ComplexNumber & complex_number);

    /**
     * @brief Move constructor. Initializes the ComplexNumber by taking
     * resources from another.
     *
     * @param complex_number The ComplexNumber instance to move from.
     */
    ComplexNumber(ComplexNumber && complex_number);

    /**
     * @brief Destructor for the ComplexNumber class.
     */
    ~ComplexNumber();

    double get_real() const;
    double get_imaginary() const;

    void set_real(double real);
    void set_imaginary(double imaginary);

    /**
     * @brief Computes the magnitude (absolute value) of the complex number.
     * This is also known as the modulus of the complex number.
     * @return The magnitude of the complex number.
     */
    double abs() const;

    /**
     * @brief Returns the complex conjugate of the current complex number.
     * @return A ComplexNumber representing the conjugate.
     */
    ComplexNumber conjugate() const;

    // TODO: Considering support for `parse` and `try_parse`

    /**
     * @brief Converts the complex number to its string representation.
     * @return A string representing the complex number in mathematical form.
     */
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
