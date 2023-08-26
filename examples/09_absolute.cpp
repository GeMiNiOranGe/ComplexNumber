#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const * argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << ">>> Demonstration of Absolute Method <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  A = " << a << '\n';
    std::cout << '\n';

    std::cout << "After calculating the absolute value:" << '\n';
    std::cout << "  A.abs() = " << a.abs() << '\n';
    std::cout << '\n';

    return 0;
}
