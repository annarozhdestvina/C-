CC = g++
CFLAGS=-c -Wall

all: Azaz

main.out: main.o io.o
	$(CC) main.o io.o -o main.out

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

io.o: io.cpp
	$(CC) $(CFLAGS) io.cpp

Azaz: main.out
	./main.out

clean:
	rm main.out *.o Azaz