#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const * argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << ">>> Demonstration of Absolute Method <<<";
    std::cout << std::endl << std::endl;

    std::cout << "Given:" << std::endl;
    std::cout << "  A = " << a << std::endl;
    std::cout << std::endl;

    std::cout << "After calculating the absolute value:" << std::endl;
    std::cout << "  A.abs() = " << a.abs() << "\n";

    return 0;
}
