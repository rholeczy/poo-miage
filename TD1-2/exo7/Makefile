CFLAGS = -O
CC = g++

prog: main.o Point.o 
	$(CC) $(CFLAGS) -o prog main.o Point.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Point.o: Point.cpp
	$(CC) $(CFLAGS) -c Point.cpp

clean: 
	rm -f core *.o
