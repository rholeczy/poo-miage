CFLAGS = -O
CC = g++

prog: main.o 
	$(CC) $(CFLAGS) -o prog main.o 

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

clean: 
	rm -f core *.o
