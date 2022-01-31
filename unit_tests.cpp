// test "doctest" unit-testing framework
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "GeometricShapes/Rectangle.hpp"
#include "GeometricShapes/Triangle.hpp"
#include <iostream>

TEST_CASE("Rectangle unit tests")
{
    Rectangle rect;
    CHECK(rect.get_area() == 0);
    rect.set_values(10,10);
    CHECK(rect.get_area() == 100);    
}

TEST_CASE("Triangle unit tests"){
    Triangle t1, t2;
    SUBCASE("Not setting the area"){
        CHECK(t1.get_area() == 0);
        CHECK(t2.get_area() == 0);
        CHECK(t1 == t2);
    }
    SUBCASE("Setting the area for one triangle"){
        t1.set_values(3,4,5);
        CHECK(t1.get_area() == 6);
        CHECK(! (t1 == t2));
    }
    SUBCASE("Setting both areas")
    {
        t1.set_values(3,4,5);
        t2.set_values(5,4,3);
        CHECK(t1.get_area() == 6);
        CHECK(t2.get_area() == t1.get_area());
        CHECK(t1 == t2);
    
    }
}
