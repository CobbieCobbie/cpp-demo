all: prog
	make clean;

prog: main.o Rectangle.o GeometricShapes.o
	g++ -o rect main.o Rectangle.o GeometricShapes.o

main.o:
	g++ -c main.cpp

Rectangle.o:
	g++ -c Rectangle.cpp

GeometricShapes.o:
	g++ -c GeometricShapes.cpp

clean:
	rm -rf *.o

	