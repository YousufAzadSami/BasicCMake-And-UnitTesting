#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "my_math.h"

TEST_CASE("Basic math operations") {
    SUBCASE("addition") {
        CHECK(add(2.0, 3.0) == 5.0);
        CHECK(add(-1.0, 1.0) == 0.0);
        CHECK(add(0.0, 0.0) == 0.0);
    }
    
    SUBCASE("subtraction") {
        CHECK(subtract(5.0, 3.0) == 2.0);
        CHECK(subtract(1.0, 1.0) == 0.0);
        CHECK(subtract(0.0, 5.0) == -5.0);
    }
    
    SUBCASE("multiplication") {
        CHECK(multiply(2.0, 3.0) == 6.0);
        CHECK(multiply(-1.0, 1.0) == -1.0);
        CHECK(multiply(0.0, 5.0) == 0.0);
    }
    
    SUBCASE("division") {
        CHECK(divide(6.0, 2.0) == 3.0);
        CHECK(divide(-4.0, 2.0) == -2.0);
        CHECK(divide(0.0, 5.0) == 0.0);
    }
    
    SUBCASE("division by zero") {
        CHECK_THROWS_AS(divide(5.0, 0.0), std::runtime_error);
    }
}
