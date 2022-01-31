//include a local class header
#include "GeometricShapes/Rectangle.hpp"
#include "GeometricShapes/Triangle.hpp"

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
    rect.print();
    rect.set_values(10,4);
    rect.print();

    Triangle t1;
    t1.set_values(3,4,5);
    t1.print();

    Triangle t2 = Triangle(3,4,5);
    Triangle t3 = Triangle(3,5,4);
    Triangle t4 = Triangle(3,5,5);
    cout << "t2 == t3?: " << (t2 == t3) << endl;
    cout << "t3 == t4?: " << (t3 == t4) << endl;

    // exit code of main() (0 always means everything worked)
    return 0;
}
