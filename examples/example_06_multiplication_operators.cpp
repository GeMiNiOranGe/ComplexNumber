#include <iostream>

#include <matho/complex_number.hpp>

int main() {
    matho::ComplexNumber a(2, 3);
    matho::ComplexNumber b(4, -1);

    std::cout << ">>> Demonstration of Complex Number Multiplication <<<" << std::endl;
    std::cout << std::endl;

    std::cout << "Given:" << std::endl;
    std::cout << "  A = " << a << std::endl;
    std::cout << "  B = " << b << std::endl;
    std::cout << std::endl;

    std::cout << "We perform several multiplication operations:" << std::endl;
    std::cout << "  1) A    * B   = " << a * b << std::endl;
    std::cout << "  2) A    * 5.0 = " << a * 5.0 << std::endl;
    std::cout << "  3) 10.0 * B   = " << 10.0 * b << std::endl;
    std::cout << std::endl;

    matho::ComplexNumber c(1, 1);
    matho::ComplexNumber d(1, 1);

    std::cout << "Now testing multiplication-assignment:" << std::endl;
    std::cout << "  Initial C = " << c << std::endl;
    std::cout << "  Initial D = " << d << std::endl;
    std::cout << std::endl;

    c *= a;
    d *= 2.0;

    std::cout << "  After C *= A   -> C = " << c << std::endl;
    std::cout << "  After D *= 2.0 -> D = " << d << std::endl;

    return 0;
}
