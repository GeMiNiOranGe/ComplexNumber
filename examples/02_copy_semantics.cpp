#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const * argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << ">>> Demonstration of Copy Constructor <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  A = " << a << '\n';
    std::cout << "  B = <Not initialized>" << '\n';
    std::cout << '\n';

    std::cout << "We initialize using the copy constructor:" << '\n';
    std::cout << "  B(A)" << '\n';
    std::cout << '\n';

    matho::ComplexNumber b(a);

    std::cout << "After initialization:" << '\n';
    std::cout << "  A = " << a << '\n';
    std::cout << "  B = " << b << '\n';
    std::cout << '\n';

    ////////////////////////////////////////////////////////////////////////////

    matho::ComplexNumber c(10.0, 20.0);
    matho::ComplexNumber d(1.0, 1.0);

    std::cout << ">>> Demonstration of Copy Assignment <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  C = " << c << '\n';
    std::cout << "  D = " << d << '\n';
    std::cout << '\n';

    std::cout << "We perform copy assignment:" << '\n';
    std::cout << "  D = C" << '\n';
    std::cout << '\n';

    d = c;

    std::cout << "After assignment:" << '\n';
    std::cout << "  C = " << c << '\n';
    std::cout << "  D = " << d << '\n';
    std::cout << '\n';

    return 0;
}
