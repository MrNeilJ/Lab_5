output: main.o Recursion.o menuMaker.o inputCheck.o
	g++ main.o Recursion.o menuMaker.o inputCheck.o -std=c++11 -o output

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

Recursion.o: Recursion.cpp Recursion.hpp
	g++ -std=c++11 -c Recursion.cpp

menuMaker.o: menuMaker.cpp menuMaker.hpp
	g++ -std=c++11 -c menuMaker.cpp

inputCheck.o: inputCheck.cpp inputCheck.hpp
	g++ -std=c++11 -c inputCheck.cpp

clean:
	rm *.o output