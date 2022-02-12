// test "doctest" unit-testing framework
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "GeometricShapes/Rectangle.hpp"
#include "GeometricShapes/Triangle.hpp"
#include "Graph/Graph.hpp"
#include <iostream>
#include <list>

TEST_CASE("Rectangle unit tests")
{
    Rectangle rect;
    CHECK(rect.get_area() == 0);
    rect.set_values(10,10);
    CHECK(rect.get_area() == 100);
}

TEST_CASE("Triangle unit tests"){
    Triangle t1, t2;
    SUBCASE("Not setting the area"){
        CHECK(t1.get_area() == 0);
        CHECK(t2.get_area() == 0);
        CHECK(t1 == t2);
    }
    SUBCASE("Setting the area for one triangle"){
        t1.set_values(3,4,5);
        CHECK(t1.get_area() == 6);
        CHECK(! (t1 == t2));
    }
    SUBCASE("Setting both areas")
    {
        t1.set_values(3,4,5);
        t2.set_values(5,4,3);
        CHECK(t1.get_area() == 6);
        CHECK(t2.get_area() == t1.get_area());
        CHECK(t1 == t2);
    }
}

TEST_CASE("Basic graph implementation"){
    list<Vertex*> vertices;
    Graph* g = new Graph(vertices);
    CHECK(g->getSize() == 0);
    Vertex* v = new Vertex("label");
    CHECK(v->getLabel() == "label");
    Vertex* u = new Vertex("another label");
    vertices.push_back(v);
    vertices.push_back(u);
    g = new Graph(vertices);
    g->addEdge(u, v);
    list<Vertex*> neighbours = g->getEdges(u);
    CHECK(neighbours.size() == 1);
    CHECK(neighbours.front()->getLabel() == "label");
}
