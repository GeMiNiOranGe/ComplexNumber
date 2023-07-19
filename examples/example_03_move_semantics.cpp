#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const *argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << "Move constructor example" << std::endl;
    std::cout << "  Before:" << std::endl;
    std::cout << "    Complex Number A: " << a << std::endl;
    std::cout << "    Complex Number B: <Not initialized>" << std::endl;
    std::cout << std::endl;

    // Move constructor
    matho::ComplexNumber b(std::move(a));

    std::cout << "  After:" << std::endl;
    std::cout << "    Complex Number A: " << a << std::endl;
    std::cout << "    Complex Number B: " << b << std::endl;
    std::cout << std::endl;

    ////////////////////////////////////////////////////////////////////////////

    matho::ComplexNumber c(10.0, 20.0);
    matho::ComplexNumber d(1.0, 1.0);

    std::cout << "Move assignment example" << std::endl;
    std::cout << "  Before:" << std::endl;
    std::cout << "    Complex Number C: " << c << std::endl;
    std::cout << "    Complex Number D: " << d << std::endl;
    std::cout << std::endl;

    // Move assignment
    d = std::move(c);

    std::cout << "  After:" << std::endl;
    std::cout << "    Complex Number C: " << c << std::endl;
    std::cout << "    Complex Number D: " << d << std::endl;

    return 0;
}
