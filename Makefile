all: prog test
	make clean;

prog: main.o Rectangle.o Triangle.o GeometricShapes.o
	g++ -o prog main.o Rectangle.o Triangle.o GeometricShapes.o

test: unit_tests.o Rectangle.o Triangle.o GeometricShapes.o
	g++ -o test unit_tests.o Rectangle.o Triangle.o GeometricShapes.o

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

clean:
	rm -rf *.o
