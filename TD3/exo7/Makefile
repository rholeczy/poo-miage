CFLAGS = -O
CC = g++

prog: main.o Point.o PointColore.o
	$(CC) $(CFLAGS) -o prog main.o Point.o PointColore.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Point.o: Point.cpp
	$(CC) $(CFLAGS) -c Point.cpp

PointColore.o: PointColore.cpp
	$(CC) $(CFLAGS) -c PointColore.cpp

clean: 
	rm -f core *.o
