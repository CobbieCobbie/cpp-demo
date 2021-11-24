#include "GeometricShapes.hpp"
#include <iostream>

GeometricShapes::GeometricShapes()
{

}

GeometricShapes::~GeometricShapes()
{

}

double GeometricShapes::get_area()
{
    return 0;
}

void GeometricShapes::print()
{
    std::cout << "This is a geometric shape";
}

bool GeometricShapes :: operator == (const GeometricShapes& g)
{
    return true;
}
