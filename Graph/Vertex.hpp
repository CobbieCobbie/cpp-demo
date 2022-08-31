#pragma once

#include <string>


// Vertex class with a label as string attribute
class Vertex
{
    private:
    	std::string label;

    public:
		/**
		* @return Constructs a vertex object with a string label
		*/

		Vertex (std::string _label);
		/**
		* @return Returns the label of the vertex
		*/
    	std::string getLabel();

		void print();

};
