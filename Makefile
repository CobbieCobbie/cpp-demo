all: prog test
	make clean;

prog: main.o Rectangle.o Triangle.o GeometricShapes.o Graph.o Vertex.o
	g++ -o prog main.o Rectangle.o Triangle.o GeometricShapes.o Graph.o Vertex.o

test: unit_tests.o Rectangle.o Triangle.o GeometricShapes.o Graph.o Vertex.o
	g++ -o test unit_tests.o Rectangle.o Triangle.o GeometricShapes.o Graph.o Vertex.o

main.o:
	g++ -c main.cpp

unit_tests.o:
	g++ -c unit_tests.cpp

Rectangle.o:
	g++ -c GeometricShapes/Rectangle.cpp

Triangle.o:
	g++ -c GeometricShapes/Triangle.cpp

GeometricShapes.o:
	g++ -c GeometricShapes/GeometricShapes.cpp

Graph.o:
	g++ -c Graph/Graph.cpp

Vertex.o:
	g++ -c Graph/Vertex.cpp

clean:
	rm -rf *.o
