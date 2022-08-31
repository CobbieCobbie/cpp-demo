/*
This header file defines the "shape" of any Rectangle object created.

In the private section, the attributes width and height are being held.
The constructor and destructor, and the functions are declared. These should be usable in the "outside world" of an object, thus public

The old way to define a macro for the preprocessor was this:

#ifndef RECTANGLE_H
#define RECTANGLE_H

Now, however, it is common practice to set
*/
#pragma once
/*
ensuring that the header file is used only once. The compiler does the rest.
*/
#include "GeometricShapes.hpp"

class Rectangle : public GeometricShapes {

    // The width and height are "classified information"
    private :
        double width;
        double height;

    // The constructor, destructor and the functions are availiable to use from any other code position
    public :
        Rectangle(double width = 0, double height = 0);
        ~Rectangle();
        void set_values(int w, int h);
        double get_area() override;
        void print() override;
        bool operator == (const Rectangle& rect);
};

//#endif
