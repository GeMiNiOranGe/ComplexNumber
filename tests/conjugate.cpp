#include <catch2/catch_approx.hpp>
#include <catch2/catch_test_macros.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("Conjugate: conjugate of (a, b) becomes (a, -b)") {
    matho::ComplexNumber a(3.0, -4.0);

    auto result = a.conjugate();

    REQUIRE(result.get_real() == Catch::Approx(3.0));
    REQUIRE(result.get_imaginary() == Catch::Approx(4.0));
}

TEST_CASE("Conjugate: conjugate of zero is zero") {
    matho::ComplexNumber a(0.0, 0.0);

    auto result = a.conjugate();

    REQUIRE(result.get_real() == Catch::Approx(0.0));
    REQUIRE(result.get_imaginary() == Catch::Approx(0.0));
}

TEST_CASE("Conjugate: conjugate of positive imaginary") {
    matho::ComplexNumber a(5.0, 7.0);

    auto result = a.conjugate();

    REQUIRE(result.get_real() == Catch::Approx(5.0));
    REQUIRE(result.get_imaginary() == Catch::Approx(-7.0));
}

TEST_CASE("Conjugate: calling conjugate() does not modify original") {
    matho::ComplexNumber a(2.0, -3.0);

    auto result = a.conjugate();

    // original untouched
    REQUIRE(a.get_real() == Catch::Approx(2.0));
    REQUIRE(a.get_imaginary() == Catch::Approx(-3.0));

    // result is conjugate
    REQUIRE(result.get_real() == Catch::Approx(2.0));
    REQUIRE(result.get_imaginary() == Catch::Approx(3.0));
}
