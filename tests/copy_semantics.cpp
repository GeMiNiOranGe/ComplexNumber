#include <catch2/catch_test_macros.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("Copy constructor copies both real and imaginary parts") {
    matho::ComplexNumber original(3.5, -2.1);

    matho::ComplexNumber copy(original);

    REQUIRE(copy.get_real() == original.get_real());
    REQUIRE(copy.get_imaginary() == original.get_imaginary());

    // ensure that the two objects are different
    REQUIRE(&copy != &original);
}

TEST_CASE("Copy assignment copies both real and imaginary parts") {
    matho::ComplexNumber a(10.0, 20.0);
    matho::ComplexNumber b(1.0, 1.0);

    b = a;

    REQUIRE(b.get_real() == a.get_real());
    REQUIRE(b.get_imaginary() == a.get_imaginary());
    REQUIRE(&b != &a);
}

TEST_CASE("Copy assignment returns *this") {
    matho::ComplexNumber a(4.2, 5.3);
    matho::ComplexNumber b(0.0, 0.0);

    matho::ComplexNumber & result = (b = a);

    REQUIRE(&result == &b);
}
