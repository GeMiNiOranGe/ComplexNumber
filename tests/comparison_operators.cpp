#include <catch2/catch_test_macros.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("Equality: A == B when real and imaginary parts are equal") {
    matho::ComplexNumber a(3.0, -2.0);
    matho::ComplexNumber b(3.0, -2.0);

    REQUIRE(a == b);
    REQUIRE_FALSE(a != b);
}

TEST_CASE("Equality: A != B when real parts differ") {
    matho::ComplexNumber a(3.0, -2.0);
    matho::ComplexNumber b(4.0, -2.0);

    REQUIRE(a != b);
    REQUIRE_FALSE(a == b);
}

TEST_CASE("Equality: A != B when imaginary parts differ") {
    matho::ComplexNumber a(3.0, -2.0);
    matho::ComplexNumber b(3.0, -1.0);

    REQUIRE(a != b);
    REQUIRE_FALSE(a == b);
}

TEST_CASE("Equality: identical objects are equal") {
    matho::ComplexNumber a(10.0, 20.0);
    matho::ComplexNumber & ref = a;

    REQUIRE(a == ref);
    REQUIRE_FALSE(a != ref);
}

TEST_CASE("Equality: zero complex numbers compare equal") {
    matho::ComplexNumber a(0.0, 0.0);
    matho::ComplexNumber b(0.0, 0.0);

    REQUIRE(a == b);
    REQUIRE_FALSE(a != b);
}
