#include <catch2/catch_approx.hpp>
#include <catch2/catch_test_macros.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("Multiplication: A * B") {
    matho::ComplexNumber a(2, 3);
    matho::ComplexNumber b(4, -1);

    // (2 + 3i) * (4 - 1i) = 2*4 - 3*(-1) + (2*(-1) + 3*4)i = 11 + 10i
    auto result = a * b;

    REQUIRE(result.get_real() == Catch::Approx(11));
    REQUIRE(result.get_imaginary() == Catch::Approx(10));
}

TEST_CASE("Multiplication: A * number") {
    matho::ComplexNumber a(2, 3);

    auto result = a * 5.0;

    REQUIRE(result.get_real() == Catch::Approx(10));       // 2 * 5
    REQUIRE(result.get_imaginary() == Catch::Approx(15));  // 3 * 5
}

TEST_CASE("Multiplication: number * B") {
    matho::ComplexNumber b(4, -1);

    auto result = 10.0 * b;

    REQUIRE(result.get_real() == Catch::Approx(40));
    REQUIRE(result.get_imaginary() == Catch::Approx(-10));
}

TEST_CASE("Multiplication assignment: A *= B") {
    matho::ComplexNumber a(1, 1);
    matho::ComplexNumber b(2, 3);

    // (1 + 1i) * (2 + 3i) = (1*2 - 1*3) + (1*3 + 1*2)i = -1 + 5i
    a *= b;

    REQUIRE(a.get_real() == Catch::Approx(-1));
    REQUIRE(a.get_imaginary() == Catch::Approx(5));
}

TEST_CASE("Multiplication assignment: A *= number") {
    matho::ComplexNumber a(1, 1);

    a *= 2.0;

    REQUIRE(a.get_real() == Catch::Approx(2));
    REQUIRE(a.get_imaginary() == Catch::Approx(2));
}
