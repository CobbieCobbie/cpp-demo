// The header file determines the content of this implementation file
#include "Rectangle.hpp"

//iostream enables printing on the console (cout)
#include <iostream>

// Constructor
Rectangle :: Rectangle(double width, double height) : GeometricShapes(),
        width(width), height(height){};

// Destructor
Rectangle :: ~Rectangle()
{

}

// set_values function, returns nothing (void)
void Rectangle :: set_values(int w, int h)
{
    width = w;
    height = h;
}

// get_area function, returns the area (int)
double Rectangle :: get_area()
{
    return (height * width);
}

// pretty-print the rectangle object specs
void Rectangle :: print()
{
    std::cout << "This is a Rectangle" << std::endl;
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
}
