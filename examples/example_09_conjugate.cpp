#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const *argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << ">>> Demonstration of Conjugate Method <<<" << std::endl;
    std::cout << std::endl;

    std::cout << "Given:" << std::endl;
    std::cout << "  A = " << a << std::endl;
    std::cout << std::endl;

    std::cout << "After getting the complex conjugate number:" << std::endl;
    std::cout << "  A.conjugate() = " << a.conjugate() << "\n";

    return 0;
}