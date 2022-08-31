#pragma once

#include <map>
#include "Vertex.hpp"
#include <list>

using namespace std;
class Graph
{
    private:
		// List of vertices
		list<Vertex*> vertices;
		// List of edges
		list<Vertex*>* edges;
		// a map, identifying a vertex with an ID
		map<Vertex*, int> vertexID;
		// array of vertices
    	Vertex** vertexByID;

    public:
		// Class constructor and destructor
		Graph(list<Vertex*> _vertices = list<Vertex*>());
		~Graph();
		// Insertion and deletion operations
		void addEdge(Vertex* u, Vertex* v);
		//void addVertex(Vertex* u);
		void removeEdge(Vertex* u, Vertex* v);
		void removeVertex(Vertex* u);
		// getters
		list<Vertex*> getVertices();
		list<Vertex*> getEdges(Vertex* u);
		int getSize();
		int getID(Vertex* u);
		Vertex* getVertex(int id);
		void print();
};
