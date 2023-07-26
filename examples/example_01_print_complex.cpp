#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const *argv[]) {
    matho::ComplexNumber a(3.0, 4.0);
    matho::ComplexNumber b(1.0, 2.0);

    std::cout << ">>> Demonstration of Printing Complex Number <<<" << std::endl;
    std::cout << std::endl;

    std::cout << "Given:" << std::endl;
    std::cout << "  A = " << a << std::endl;
    std::cout << "  B = " << b << std::endl;

    return 0;
}
