#include <catch2/catch_test_macros.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("Move constructor transfers real and imaginary parts") {
    matho::ComplexNumber original(7.5, -3.2);

    matho::ComplexNumber moved(std::move(original));

    REQUIRE(moved.get_real() == 7.5);
    REQUIRE(moved.get_imaginary() == -3.2);
}

TEST_CASE("Move assignment transfers real and imaginary parts") {
    matho::ComplexNumber a(1.1, 2.2);
    matho::ComplexNumber b(9.9, 8.8);

    b = std::move(a);

    REQUIRE(b.get_real() == 1.1);
    REQUIRE(b.get_imaginary() == 2.2);
}

TEST_CASE("Move assignment returns *this") {
    matho::ComplexNumber a(3.3, 4.4);
    matho::ComplexNumber b(0.0, 0.0);

    matho::ComplexNumber & result = (b = std::move(a));

    REQUIRE(&result == &b);
}
