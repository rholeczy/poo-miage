CFLAGS = -O
CC = g++

prog: main.o Vecteur3D.o
	$(CC) $(CFLAGS) -o prog main.o Vecteur3D.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Vecteur3D.o: Vecteur3D.cpp
	$(CC) $(CFLAGS) -c Vecteur3D.cpp

clean: 
	rm -f core *.o
