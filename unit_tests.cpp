// test "doctest" unit-testing framework
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "Rectangle.hpp"
#include <iostream>

int return_rect_area(int width, int height)
{
    Rectangle rect1;
    rect1.set_values(width, height);
    return rect1.get_area();
}

TEST_CASE("Testing the area of various Rectangles")
{
    CHECK(return_rect_area(10,10) == 100);
    CHECK(return_rect_area(0,0) == 0);
    CHECK(return_rect_area(-2,2) == 4);
}
