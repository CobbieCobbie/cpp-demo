#include "Triangle.hpp"

#include <algorithm>
#include <iostream>
#include <cmath>

Triangle :: Triangle(double side1, double side2, double side3) : GeometricShapes(),
        side1(side1), side2(side2), side3(side3){};

Triangle :: ~Triangle()
{

}

void Triangle :: set_values(double s1, double s2, double s3)
{
    side1 = s1;
    side2 = s2;
    side3 = s3;
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
    std::cout << "Area: " << get_area() << std::endl;
}

bool Triangle :: operator == (const Triangle& t){
    double t1[3] {0};
    double t2[3] {0};
    t1[0] = side1;
    t1[1] = side2;
    t1[2] = side3;
    t2[0] = t.side1;
    t2[1] = t.side2;
    t2[2] = t.side3;
    std::sort(t1,t1+3);
    std::sort(t2,t2+3);
    for (int i = 0; i<3; i++){
        if (t1[i] != t2[i])
        {
            return false;
        }
    }
    return true;
}
