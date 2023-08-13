#include <catch2/catch_approx.hpp>
#include <catch2/catch_test_macros.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("Division: A / B") {
    matho::ComplexNumber a(2, 3);
    matho::ComplexNumber b(4, -1);

    // denominator = 4^2 + (-1)^2 = 16 + 1 = 17
    // real = (2*4 + 3*(-1)) / 17 = (8 - 3) / 17 = 5/17
    // imag = (3*4 - 2*(-1)) / 17 = (12 + 2) / 17 = 14/17
    auto result = a / b;

    REQUIRE(result.get_real() == Catch::Approx(5.0 / 17.0));
    REQUIRE(result.get_imaginary() == Catch::Approx(14.0 / 17.0));
}

TEST_CASE("Division: A / number") {
    matho::ComplexNumber a(2, 3);

    auto result = a / 5.0;

    REQUIRE(result.get_real() == Catch::Approx(2.0 / 5.0));
    REQUIRE(result.get_imaginary() == Catch::Approx(3.0 / 5.0));
}

TEST_CASE("Division: number / B") {
    matho::ComplexNumber b(4, -1);

    // (10 + 0i) / (4 - 1i)
    // denominator = 4^2 + (-1)^2 = 17
    // real = (10*4 + 0*(-1)) / 17 = 40 / 17
    // imag = (0*4 - 10*(-1)) / 17 = 10 / 17
    auto result = 10.0 / b;

    REQUIRE(result.get_real() == Catch::Approx(40.0 / 17.0));
    REQUIRE(result.get_imaginary() == Catch::Approx(10.0 / 17.0));
}

TEST_CASE("Division assignment: C /= A") {
    matho::ComplexNumber a(2, 3);
    matho::ComplexNumber c(7, 5);

    // (7 + 5i) / (2 + 3i)
    // denominator = 13
    // real = (7*2 + 5*3) / 13 = (14 + 15)/13 = 29/13
    // imag = (5*2 - 7*3) / 13 = (10 - 21)/13 = -11/13
    c /= a;

    REQUIRE(c.get_real() == Catch::Approx(29.0 / 13.0));
    REQUIRE(c.get_imaginary() == Catch::Approx(-11.0 / 13.0));
}

TEST_CASE("Division assignment: D /= number") {
    matho::ComplexNumber d(7, 5);

    d /= 2.0;

    REQUIRE(d.get_real() == Catch::Approx(3.5));
    REQUIRE(d.get_imaginary() == Catch::Approx(2.5));
}
