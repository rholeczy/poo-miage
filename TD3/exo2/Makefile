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
clean: 
	rm -f core *.o
