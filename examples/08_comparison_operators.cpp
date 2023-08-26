#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const * argv[]) {
    matho::ComplexNumber a(5.0, 0.0);
    matho::ComplexNumber b(5.0, 1.0);
    double num = 5.0;

    // Enable true/false printing mode instead of 1/0.
    std::cout << std::boolalpha;

    std::cout << ">>> Demonstration of Comparison <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  A   = " << a << '\n';
    std::cout << "  B   = " << b << '\n';
    std::cout << "  num = " << num << '\n';
    std::cout << '\n';

    std::cout << "We perform several equality operations:" << '\n';
    std::cout << "  1) a   == b   ? -> " << (a == b) << '\n';
    std::cout << "  2) a   == num ? -> " << (a == num) << '\n';
    std::cout << "  3) num == a   ? -> " << (num == a) << '\n';
    std::cout << '\n';

    std::cout << "  4) a   != b   ? -> " << (a != b) << '\n';
    std::cout << "  5) a   != num ? -> " << (a != num) << '\n';
    std::cout << "  6) num != a   ? -> " << (num != a) << '\n';
    std::cout << '\n';

    return 0;
}
