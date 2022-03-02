CFLAGS = -O
CC = g++

prog: main.o Banque.o Compte.o
	$(CC) $(CFLAGS) -o prog main.o Banque.o Compte.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Banque.o: Banque.cpp
	$(CC) $(CFLAGS) -c Banque.cpp

Compte.o: Compte.cpp
	$(CC) $(CFLAGS) -c Compte.cpp

clean: 
	rm -f core *.o
