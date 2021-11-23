#include "Triangle.hpp"

#include <iostream>
#include <cmath>

Triangle :: ~Triangle()
{

}

void Triangle :: set_values(double side1, double side2, double side3)
{
    side1 = side1;
    side2 = side2;
    side3 = side3;
}

double Triangle :: get_area()
{
    double p = (side1 + side2 + side3) / 2.0;
    return sqrt(p*(p-side1)*(p-side2)*(p-side3));
}

void Triangle :: print()
{
    std::cout << "This is a triangle" << std::endl;
    std::cout << "Side1: " << side1 << ", Side2: " << side2 << ", Side3: " << side3 << std::endl;
}