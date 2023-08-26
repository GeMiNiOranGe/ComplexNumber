#include <iostream>

#include <matho/complex_number.hpp>

int main() {
    matho::ComplexNumber a(2, 3);
    matho::ComplexNumber b(4, -1);

    std::cout << ">>> Demonstration of Division <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  A = " << a << '\n';
    std::cout << "  B = " << b << '\n';
    std::cout << '\n';

    std::cout << "We perform several division operations:" << '\n';
    std::cout << "  1) A    / B   = " << a / b << '\n';
    std::cout << "  2) A    / 5.0 = " << a / 5.0 << '\n';
    std::cout << "  3) 10.0 / B   = " << 10.0 / b << '\n';
    std::cout << '\n';

    matho::ComplexNumber c(1, 1);
    matho::ComplexNumber d(1, 1);

    std::cout << "Now testing division-assignment:" << '\n';
    std::cout << "  Initial C = " << c << '\n';
    std::cout << "  Initial D = " << d << '\n';
    std::cout << '\n';

    c /= a;
    d /= 2.0;

    std::cout << "  After C /= A   -> C = " << c << '\n';
    std::cout << "  After D /= 2.0 -> D = " << d << '\n';
    std::cout << '\n';

    return 0;
}
