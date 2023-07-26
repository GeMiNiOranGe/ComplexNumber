#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const *argv[]) {
    matho::ComplexNumber a(3.0, 4.0);

    std::cout << ">>> Demonstration of Move Constructor <<<" << std::endl;
    std::cout << std::endl;

    std::cout << "Given:" << std::endl;
    std::cout << "  A = " << a << std::endl;
    std::cout << "  B = <Not initialized>" << std::endl;
    std::cout << std::endl;

    std::cout << "We initialize using the move constructor:" << std::endl;
    std::cout << "  B(std::move(A))" << std::endl;
    std::cout << std::endl;

    matho::ComplexNumber b(std::move(a));

    std::cout << "After initialization:" << std::endl;
    std::cout << "  A = " << a << std::endl;
    std::cout << "  B = " << b << std::endl;
    std::cout << std::endl;

    ////////////////////////////////////////////////////////////////////////////

    matho::ComplexNumber c(10.0, 20.0);
    matho::ComplexNumber d(1.0, 1.0);

    std::cout << ">>> Demonstration of Move Assignment <<<" << std::endl;
    std::cout << std::endl;

    std::cout << "Given:" << std::endl;
    std::cout << "  C = " << c << std::endl;
    std::cout << "  D = " << d << std::endl;
    std::cout << std::endl;

    std::cout << "We perform move assignment:" << std::endl;
    std::cout << "  D = std::move(C)" << std::endl;
    std::cout << std::endl;

    d = std::move(c);

    std::cout << "After assignment:" << std::endl;
    std::cout << "  C = " << c << std::endl;
    std::cout << "  D = " << d << std::endl;

    return 0;
}
