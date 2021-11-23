#pragma once

class GeometricShapes
{
    public:
        GeometricShapes();
        virtual ~GeometricShapes();
        virtual double get_area() = 0;
        virtual void print();
};
