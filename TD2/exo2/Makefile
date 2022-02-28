CFLAGS = -O
CC = g++

prog: main.o Personne.o
	$(CC) $(CFLAGS) -o prog main.o Personne.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Personne.o: Personne.cpp
	$(CC) $(CFLAGS) -c Personne.cpp

clean: 
	rm -f core *.o
