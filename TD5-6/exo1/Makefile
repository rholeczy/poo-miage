CFLAGS = -O
CC = g++

prog: main.o Animal.o
	$(CC) $(CFLAGS) -o prog main.o Animal.o

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

Animal.o: Animal.cpp
	$(CC) $(CFLAGS) -c Animal.cpp

clean: 
	rm -f core *.o
