#pragma once

#include "GeometricShapes.hpp"

class Triangle : public GeometricShapes {
    private:
        double side1, side2, side3; //Three sides determine the area of the triangle
    public:
        Triangle(double side1 = 0, double side2 = 0, double side3 = 0);
        ~Triangle();
        void set_values(double side1, double side2, double side3);
        double get_area() override;
        void print() override;
};
