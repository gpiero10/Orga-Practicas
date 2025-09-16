CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = feli3

all: $(TARGET)

$(TARGET): feli3.o
	$(CC) $(CFLAGS) $^ -o $@

feli3.o: feli3.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean