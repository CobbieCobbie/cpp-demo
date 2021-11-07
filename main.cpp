//include a local class header
#include "Rectangle.hpp"

//use the namespace of the standard libs of C/C++
using namespace std;

int main(const int argc, const char** argv)
{
    // Print a message, using the namespace of std explicitely
    std::cout << "Initializing..." << std::endl;
    
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
    
    // exit code of main() (0 always means everything worked)
    return 0;
}
