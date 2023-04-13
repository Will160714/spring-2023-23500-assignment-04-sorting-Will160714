CXXFLAGS=-g

main: main.o quicksort2.o
	g++ -g -o main main.o quicksort2.o

main.o: main.cpp quicksort2.h

quicksort2.o: quicksort2.cpp quicksort2.h

clean:
	rm -f main.o quicksort2.o