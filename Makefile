CC=gcc
CFLAGS=-Wall
EXECUTABLE=list

list: linkedList.o main.c
	$(CC) $(CFLAGS) linkedList.o main.c -o $(EXECUTABLE)

linkedList.o: linkedList.h
clean:
	rm -rf *.o *.gch $(EXECUTABLE)

leaks:
	valgrind --leak-check=yes ./$(EXECUTABLE)
