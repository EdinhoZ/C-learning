CC= gcc
LDFLAGS=
CCFLAGS= -Wall -c

all:main

main:
	$(CC) $ main.o deque.o $(LDFLAGS) -o main

main.o: main.c
	$(CC) $(CFLAGS) main.c

deque.o: deque.c
	$(CC) $(CFLAGS) deque.c -o deque.o

clean:
	rm -f deque.o main.o main