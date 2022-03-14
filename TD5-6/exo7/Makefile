CFLAGS = -O
CC = g++

prog: main.o Point.o Couleur.o Masse.o PointColore.o PointMasse.o PointColMas.o
	$(CC) $(CFLAGS) -o prog main.o Point.o Couleur.o Masse.o PointColore.o PointMasse.o PointColMas.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Point.o: Point.cpp
	$(CC) $(CFLAGS) -c Point.cpp

Couleur.o: Couleur.cpp
	$(CC) $(CFLAGS) -c Couleur.cpp

Masse.o: Masse.cpp
	$(CC) $(CFLAGS) -c Masse.cpp

PointColore.o: PointColore.cpp
	$(CC) $(CFLAGS) -c PointColore.cpp

PointMasse.o: PointMasse.cpp
	$(CC) $(CFLAGS) -c PointMasse.cpp

PointColMas.o: PointColMas.cpp
	$(CC) $(CFLAGS) -c PointColMas.cpp
clean: 
	rm -f core *.o
