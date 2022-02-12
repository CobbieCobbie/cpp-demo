#include "Graph.hpp"
#include <iostream>

using namespace std;


/**
* Constructor for a graph object
* The size of the graph is determined by the length of the vertex list argument
* @param _vertices A list of vertex objects, referred as pointers
*/
Graph::Graph(list<Vertex*> _vertices)
{
	vertexByID = new Vertex*[_vertices.size()];
	int id = 0;
	for (Vertex* v : _vertices)
	{
		vertices.push_back(v);
		vertexID[v] = id;
		vertexByID[id] = v;
		id++;
	}
	// creates the arrays, representing the edges
	edges = new list<Vertex*>[getVertices().size()];
}


/**
* Destructor
*/
Graph::~Graph()
{
	delete[] vertexByID;
	delete[] edges;
}


/**
* Adds an edge to an existing graph
* @param u first vertex of interest
* @param v second vertex of interest
*/
void Graph::addEdge(Vertex* u, Vertex* v)
{
	int uID = getID(u);
	int vID = getID(v);
	if (uID != -1 && vID != -1)
	{
		edges[uID].push_back(v);
		edges[vID].push_back(u);
	}
}

/*void Graph::addVertex(Vertex* v)
{
	vertices.push_back(v);
	int n = vertices.size();

}*/


/**
 * Removes an edge from a graph iff existent
 * @param u first vertex of interest
 * @param v second vertex of interest
 */
void Graph::removeEdge(Vertex* u, Vertex* v)
{
	int uID = getID(u);
	int vID = getID(v);
	if (uID != -1 && vID != -1)
	{
		edges[uID].remove(v);
		edges[vID].remove(u);
	}
}

/**
 * Removes a vertex u and the edges between u and its neighbours
 * @param u vertex to be removed
 */
void Graph::removeVertex(Vertex* u)
{
	// Removes all incident edges
	for (Vertex* v : getEdges(u))
	{
		removeEdge(v,u);
	}
	// Remove vertex from all vertices
	vertices.remove(u);

	// Markiere Knoten als gelöscht
	// isDeletedVertex[getID(u)] = true;
}


/**
 * Returns all vertices of a graph G
 * @return List of all vertices of G
 */
list<Vertex*> Graph::getVertices()
{
	list<Vertex*> res;
	for (Vertex* v : vertices)
	{
		res.push_back(v);
	}
	return res;
}

/**
 * Returns the neighourhood of a vertex u
 * @param u the vertex queried for its neighbours
 * @return
 */
list<Vertex*> Graph :: getEdges(Vertex* u)
{
	int uID = getID(u);
	list<Vertex*> res;
	for (Vertex* target : edges[uID])
	{
		res.push_back(target);
	}
	return res;
}

/**
 * Returns the size of G
 * @return Amount of vertices
 */
int Graph :: getSize(){	return vertices.size();	}

/**
* Returns the unique ID of a vertex iff existent between 0 and n-1, else -1
* @param v vertex of interest
* @return unique ID of vertex in [-1..n-1]
*/
int Graph :: getID(Vertex* v){	return vertexID[v];	}

/**
* Returns the vertex object referred by the unique ID
* @param id unique ID
* @return corresponding vertex object
*/
Vertex* Graph :: getVertex(int id){	return vertexByID[id];	}

void Graph :: print()
{
	std :: cout << "This is a graph with " << getSize() << " vertices." << std :: endl;
}
