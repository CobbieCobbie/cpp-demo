// The header file determines the content of this implementation file
#include "Rectangle.hpp"

// Constructor
Rectangle :: Rectangle(const int width, const int height)
    : width(width), height(height)
{

}

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
int Rectangle :: get_area()
{
    return (height * width);
}

// pretty-print the rectangle object specs
void Rectangle :: print() const
{
    std::cout << "Width: " << width << ", Height: " << height << std::endl;
}
