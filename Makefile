all: main

main: main.o Animal.o Ours.o Lion.o Loup.o Pierre.o attaque.o
	g++ -std=c++14 -Wall main.o Animal.o Ours.o Lion.o Loup.o Pierre.o attaque.o -o main

main.o: main.cpp
	g++ -std=c++14 -Wall -c main.cpp -o main.o

Animal.o: Animal.cpp
	g++ -std=c++14 -Wall -c Animal.cpp -o Animal.o

Ours.o: Ours.cpp
	g++ -std=c++14 -Wall -c Ours.cpp -o Ours.o

Lion.o: Lion.cpp
	g++ -std=c++14 -Wall -c Lion.cpp -o Lion.o

Loup.o: Loup.cpp
	g++ -std=c++14 -Wall -c Loup.cpp -o Loup.o

Pierre.o: Pierre.cpp
	g++ -std=c++14 -Wall -c Pierre.cpp -o Pierre.o

attaque.o: attaque.cpp
	g++ -std=c++14 -Wall -c attaque.cpp -o attaque.o

clean:
	rm -f *.o main

.PHONY: all clean