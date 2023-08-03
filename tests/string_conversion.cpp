#include <catch2/catch_approx.hpp>
#include <catch2/catch_test_macros.hpp>
#include <catch2/generators/catch_generators.hpp>
#include <matho/complex_number.hpp>

TEST_CASE("to_string() produces correct format", "[string][to_string]") {
    auto [real, imag, expected] = GENERATE(
        std::tuple<double, double, std::string>{0.0, 3.0, "3i"},
        std::tuple<double, double, std::string>{1.0, 2.0, "1+2i"},
        std::tuple<double, double, std::string>{1.0, 1.0, "1+i"},
        std::tuple<double, double, std::string>{1.0, 0.5, "1+0.5i"},
        std::tuple<double, double, std::string>{1.0, 0.0, "1"},
        std::tuple<double, double, std::string>{1.0, -0.5, "1-0.5i"},
        std::tuple<double, double, std::string>{1.0, -1.0, "1-i"},
        std::tuple<double, double, std::string>{1.0, -2.0, "1-2i"},
        std::tuple<double, double, std::string>{0.0, 0.0, "0"}
    );

    matho::ComplexNumber c(real, imag);

    REQUIRE(c.to_string() == expected);
}

TEST_CASE("operator<< outputs same as to_string()", "[string][ostream]") {
    matho::ComplexNumber c(1.0, 2.0);

    std::ostringstream oss;
    oss << c;

    REQUIRE(oss.str() == c.to_string());
}

TEST_CASE(
    "operator>> parses two numbers into ComplexNumber",
    "[string][istream]"
) {
    std::istringstream iss("10.5 -7.25");
    matho::ComplexNumber c;

    iss >> c;

    REQUIRE(c.get_real() == Catch::Approx(10.5));
    REQUIRE(c.get_imaginary() == Catch::Approx(-7.25));
}

TEST_CASE(
    "operator>> handles leading/trailing whitespace",
    "[string][istream]"
) {
    std::istringstream iss("   4.0   9.0   ");
    matho::ComplexNumber c;

    iss >> c;

    REQUIRE(c.get_real() == Catch::Approx(4.0));
    REQUIRE(c.get_imaginary() == Catch::Approx(9.0));
}

TEST_CASE("round-trip: to_string -> parse", "[string][roundtrip]") {
    matho::ComplexNumber original(3.14159, -6.28);

    // to string
    std::string s = original.to_string();

    // parse
    std::istringstream iss(s);
    matho::ComplexNumber parsed;
    iss >> parsed;

    REQUIRE(parsed.get_real() == Catch::Approx(original.get_real()));
    REQUIRE(parsed.get_imaginary() == Catch::Approx(original.get_imaginary()));
}
