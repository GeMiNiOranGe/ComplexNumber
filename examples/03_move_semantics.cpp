#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const * argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << ">>> Demonstration of Move Constructor <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  A = " << a << '\n';
    std::cout << "  B = <Not initialized>" << '\n';
    std::cout << '\n';

    std::cout << "We initialize using the move constructor:" << '\n';
    std::cout << "  B(std::move(A))" << '\n';
    std::cout << '\n';

    matho::ComplexNumber b(std::move(a));

    std::cout << "After initialization:" << '\n';
    std::cout << "  A = " << a << '\n';
    std::cout << "  B = " << b << '\n';
    std::cout << '\n';

    ////////////////////////////////////////////////////////////////////////////

    matho::ComplexNumber c(10.0, 20.0);
    matho::ComplexNumber d(1.0, 1.0);

    std::cout << ">>> Demonstration of Move Assignment <<<" << '\n';
    std::cout << '\n';

    std::cout << "Given:" << '\n';
    std::cout << "  C = " << c << '\n';
    std::cout << "  D = " << d << '\n';
    std::cout << '\n';

    std::cout << "We perform move assignment:" << '\n';
    std::cout << "  D = std::move(C)" << '\n';
    std::cout << '\n';

    d = std::move(c);

    std::cout << "After assignment:" << '\n';
    std::cout << "  C = " << c << '\n';
    std::cout << "  D = " << d << '\n';
    std::cout << '\n';

    return 0;
}
