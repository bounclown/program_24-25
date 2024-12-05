CC=gcc
LDFLAGS = -lm

all: vector_program

vector_program: main.o vector.o input.o
	$(CC) main.o vector.o input.o -o vector_program $(LDFLAGS)

main.o: main.c
	$(CC) -c main.c -o main.o

vector.o: vector.c
	$(CC) -c vector.c -o vector.o

input.o: input.c
	$(CC) -c input.c -o input.o

clean:
	rm -rf *.o vector_program