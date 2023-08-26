#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const * argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << ">>> Demonstration of Conjugate Method <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  A = " << a << '\n';
    std::cout << '\n';

    std::cout << "After getting the complex conjugate number:" << '\n';
    std::cout << "  A.conjugate() = " << a.conjugate() << '\n';
    std::cout << '\n';

    return 0;
}
