all: prog
	make clean;

prog: main.o Rectangle.o Triangle.o GeometricShapes.o
	g++ -o prog main.o Rectangle.o Triangle.o GeometricShapes.o

main.o:
	g++ -c main.cpp

Rectangle.o:
	g++ -c Rectangle.cpp

Triangle.o:
	g++ -c Triangle.cpp

GeometricShapes.o:
	g++ -c GeometricShapes.cpp

clean:
	rm -rf *.o

	