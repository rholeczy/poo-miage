CFLAGS = -O
CC = g++

prog: main.o Animal.o Chien.o
	$(CC) $(CFLAGS) -o prog main.o Animal.o Chien.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Animal.o: Animal.cpp
	$(CC) $(CFLAGS) -c Animal.cpp

Chien.o: Chien.cpp
	$(CC) $(CFLAGS) -c Chien.cpp

Poisson.o: Poisson.cpp
	$(CC) $(CFLAGS) -c Poisson.cpp

Mammifere.o: Mammifere.cpp
	$(CC) $(CFLAGS) -c Mammifere.cpp

clean: 
	rm -f core *.o
