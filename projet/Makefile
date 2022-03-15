CFLAGS = -O
CC = g++

prog: main.o Personne.o Registre.o 
	$(CC) $(CFLAGS) -o prog main.o Personne.o Registre.o 

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Personne.o: Personne.cpp
	$(CC) $(CFLAGS) -c Personne.cpp

clean: 
	rm -f core *.o
