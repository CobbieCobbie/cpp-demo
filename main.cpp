//include a local class header
#include "Rectangle.hpp"
#include "Triangle.hpp"

//iostream enables printing on the console (cout)
#include <iostream>

int main(const int argc, const char** argv)
{
    // Print a message, using the namespace of std explicitely
    std::cout << "Initializing..." << std::endl;

    //use the namespace of the standard libs of C/C++
    using namespace std;    
    
    // Print a message without explicite namespace since we declared it globally in line 7
    cout << "Still initializing..." << endl;

    // Construct an object of class Rectangle with initial height and width 0
    Rectangle rect;
    
    // Print the specs of the object rect
    rect.print();
    
    // Set the values, print the specs and print the area
    rect.set_values(10,9);
    rect.print();
    int area = rect.get_area();
    cout << "Area: " << area << endl;

    Triangle t1;
    t1.print();
    Triangle t2 = Triangle(3,4,5);
    t2.print();
    cout << "Area: " << t2.get_area() << endl; 

    
    // exit code of main() (0 always means everything worked)
    return 0;
}
