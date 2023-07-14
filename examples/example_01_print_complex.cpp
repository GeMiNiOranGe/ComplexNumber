#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const *argv[]) {
    matho::ComplexNumber a(3.0, 4.0);
    matho::ComplexNumber b(1.0, 2.0);

    std::cout << "Complex Number A: " << a << std::endl;
    std::cout << "Complex Number B: " << b << std::endl;

    return 0;
}
