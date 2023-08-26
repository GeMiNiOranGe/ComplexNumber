#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const * argv[]) {
    matho::ComplexNumber a(0.0, 3.0);
    matho::ComplexNumber b(1.0, 2.0);
    matho::ComplexNumber c(1.0, 1.0);
    matho::ComplexNumber d(1.0, 1.0 / 2.0);
    matho::ComplexNumber e(1.0, 0.0);
    matho::ComplexNumber f(1.0, -1.0 / 2.0);
    matho::ComplexNumber g(1.0, -1.0);
    matho::ComplexNumber h(1.0, -2.0);
    matho::ComplexNumber i;

    std::cout << ">>> Demonstration of Printing Complex Number <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  A = " << a << '\n';
    std::cout << "  B = " << b << '\n';
    std::cout << "  C = " << c << '\n';
    std::cout << "  D = " << d << '\n';
    std::cout << "  E = " << e << '\n';
    std::cout << "  F = " << f << '\n';
    std::cout << "  G = " << g << '\n';
    std::cout << "  H = " << h << '\n';
    std::cout << "  I = " << i << '\n';
    std::cout << '\n';

    return 0;
}
