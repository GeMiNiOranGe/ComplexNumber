#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const *argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << "Before move:" << std::endl;
    std::cout << "Complex Number A: " << a << std::endl;
    std::cout << "Complex Number B: <Not initialized>" << std::endl;
    std::cout << std::endl;

    // Move constructor
    matho::ComplexNumber b(std::move(a));

    std::cout << "After move:" << std::endl;
    std::cout << "Complex Number A: " << a << std::endl;
    std::cout << "Complex Number B: " << b << std::endl;

    return 0;
}
