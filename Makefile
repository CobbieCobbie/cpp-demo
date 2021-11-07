all: prog test
	make clean;

prog: main.o Rectangle.o Triangle.o GeometricShapes.o
	g++ -o prog main.o Rectangle.o Triangle.o GeometricShapes.o

test: unit_tests.o Rectangle.o Triangle.o GeometricShapes.o
	g++ -o test unit_tests.o Rectangle.o Triangle.o GeometricShapes.o

main.o:
	g++ -c main.cpp

test.o:
	g++ -c unit_tests.cpp

Rectangle.o:
	g++ -c Rectangle.cpp

Triangle.o:
	g++ -c Triangle.cpp

GeometricShapes.o:
	g++ -c GeometricShapes.cpp

clean:
	rm -rf *.o
