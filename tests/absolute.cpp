#include <catch2/catch_approx.hpp>
#include <catch2/catch_test_macros.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("Absolute value: magnitude of (3, 4) is 5") {
    matho::ComplexNumber a(3.0, 4.0);

    REQUIRE(a.abs() == Catch::Approx(5.0));
}

TEST_CASE("Absolute value: magnitude of (0, 0) is 0") {
    matho::ComplexNumber a(0.0, 0.0);

    REQUIRE(a.abs() == Catch::Approx(0.0));
}

TEST_CASE("Absolute value: magnitude of negative values is handled correctly") {
    matho::ComplexNumber a(-6.0, -8.0);

    // sqrt((-6)^2 + (-8)^2) = sqrt(36 + 64) = sqrt(100) = 10
    REQUIRE(a.abs() == Catch::Approx(10.0));
}

TEST_CASE("Absolute value: fractional values compute correctly") {
    matho::ComplexNumber a(0.5, 0.75);

    // sqrt(0.25 + 0.5625) = sqrt(0.8125)
    REQUIRE(a.abs() == Catch::Approx(std::sqrt(0.8125)));
}
