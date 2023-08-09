#include <catch2/catch_approx.hpp>
#include <catch2/catch_test_macros.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("Subtraction: A - B") {
    matho::ComplexNumber a(2, 3);
    matho::ComplexNumber b(4, -1);

    auto result = a - b;

    REQUIRE(result.get_real() == Catch::Approx(-2));      // 2 - 4
    REQUIRE(result.get_imaginary() == Catch::Approx(4));  // 3 - (-1)
}

TEST_CASE("Subtraction: A - number") {
    matho::ComplexNumber a(2, 3);

    auto result = a - 5.0;

    REQUIRE(result.get_real() == Catch::Approx(-3));  // 2 - 5
    REQUIRE(result.get_imaginary() == Catch::Approx(3));
}

TEST_CASE("Subtraction: number - B") {
    matho::ComplexNumber b(4, -1);

    auto result = 10.0 - b;

    REQUIRE(result.get_real() == Catch::Approx(6));       // 10 - 4
    REQUIRE(result.get_imaginary() == Catch::Approx(1));  // 0 - (-1)
}

TEST_CASE("Subtraction-assignment: A -= B") {
    matho::ComplexNumber a(5, 5);
    matho::ComplexNumber b(2, 3);

    a -= b;

    REQUIRE(a.get_real() == Catch::Approx(3));       // 5 - 2
    REQUIRE(a.get_imaginary() == Catch::Approx(2));  // 5 - 3
}

TEST_CASE("Subtraction-assignment: A -= number") {
    matho::ComplexNumber a(5, 5);

    a -= 2.0;

    REQUIRE(a.get_real() == Catch::Approx(3));  // 5 - 2
    REQUIRE(a.get_imaginary() == Catch::Approx(5));
}
