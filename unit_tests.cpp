// test "doctest" unit-testing framework
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "Rectangle.hpp"
#include <iostream>

TEST_CASE("Succeeding unit tests")
{
    Rectangle rect;
    CHECK(rect.get_area() == 0);
    rect.set_values(10,10);
    CHECK(rect.get_area() == 100);    
}

TEST_CASE("Unit tests with sub cases"){
    Rectangle rect;
    SUBCASE("Not setting the area"){
        CHECK(rect.get_area() == 0);
    }
    SUBCASE("Setting the area"){
        rect.set_values(10,10);
        CHECK(rect.get_area() == 100);
    }
}
