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

    std::cout << ">>> Demonstration of Printing Complex Number <<<";
    std::cout << std::endl << std::endl;

    std::cout << "Given:" << std::endl;
    std::cout << "  A = " << a << std::endl;
    std::cout << "  B = " << b << std::endl;
    std::cout << "  C = " << c << std::endl;
    std::cout << "  D = " << d << std::endl;
    std::cout << "  E = " << e << std::endl;
    std::cout << "  F = " << f << std::endl;
    std::cout << "  G = " << g << std::endl;
    std::cout << "  H = " << h << std::endl;
    std::cout << "  I = " << i << std::endl;

    return 0;
}
