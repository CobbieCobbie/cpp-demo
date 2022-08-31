#include "Vertex.hpp"
#include <iostream>

std::string Vertex :: getLabel()
{
	return label;
}

Vertex :: Vertex(std::string _label)
{
	label = _label;
}

void Vertex :: print()
{
	std::cout << label << std::endl;
}

