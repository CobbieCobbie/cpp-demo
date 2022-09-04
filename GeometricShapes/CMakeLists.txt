add_library(GeometricShapes GeometricShapes.cpp)
add_library(Rectangle Rectangle.cpp GeometricShapes)
add_library(Triangle Triangle.cpp GeometricShapes)