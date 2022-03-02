CFLAGS = -O
CC = g++

prog: main.o Pile.o
	$(CC) $(CFLAGS) -o prog main.o Pile.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Pile.o: Pile.cpp
	$(CC) $(CFLAGS) -c Pile.cpp

clean: 
	rm -f core *.o
