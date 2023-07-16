#include <iostream>

#include <matho/config.hpp>

int main(int argc, char const *argv[]) {
    std::cout << "ComplexNumber version: ";
    std::cout << COMPLEX_NUMBER_VERSION_MAJOR << ".";
    std::cout << COMPLEX_NUMBER_VERSION_MINOR << ".";
    std::cout << COMPLEX_NUMBER_VERSION_PATCH << ".";
    std::cout << COMPLEX_NUMBER_VERSION_TWEAK;
    std::cout << std::endl;

    return 0;
}
