CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = prog

all: $(TARGET)

$(TARGET): prog.o
	$(CC) $(CFLAGS) $^ -o $@

prog.o: prog.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean