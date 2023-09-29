compile: main.o lib.o
	g++ -o main.out main.o lib.o 

main.o: main.cpp
	g++ -c main.cpp

lib.o: lib.cpp lib.hpp
	g++ -c lib.cpp

clean:
	rm *.o

run:
	./main.out
