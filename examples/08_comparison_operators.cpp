#include <iostream>

#include <matho/complex_number.hpp>

int main(int argc, char const * argv[]) {
    matho::ComplexNumber a(5.0, 0.0);
    matho::ComplexNumber b(5.0, 1.0);
    double num = 5.0;

    std::cout << ">>> Demonstration of Complex Number Comparison <<<";
    std::cout << std::endl << std::endl;

    std::cout << "Given:" << std::endl;
    std::cout << "  A   = " << a << std::endl;
    std::cout << "  B   = " << b << std::endl;
    std::cout << "  num = " << num << std::endl;
    std::cout << std::endl;

    std::string result1 = (a == b ? "true" : "false");
    std::string result2 = (a == num ? "true" : "false");
    std::string result3 = (num == a ? "true" : "false");

    std::cout << "We perform several comparison operations:" << std::endl;
    std::cout << "  1) a   == b   ? -> " << result1 << std::endl;
    std::cout << "  2) a   == num ? -> " << result2 << std::endl;
    std::cout << "  3) num == a   ? -> " << result3 << std::endl;
    std::cout << std::endl;

    std::string result4 = (a != b ? "true" : "false");
    std::string result5 = (a != num ? "true" : "false");
    std::string result6 = (num != a ? "true" : "false");

    std::cout << "  4) a   != b   ? -> " << result4 << std::endl;
    std::cout << "  5) a   != num ? -> " << result5 << std::endl;
    std::cout << "  6) num != a   ? -> " << result6 << std::endl;

    return 0;
}
