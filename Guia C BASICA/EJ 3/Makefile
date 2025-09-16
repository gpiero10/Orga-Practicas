CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = tam

all: $(TARGET)

$(TARGET): tam.o
	$(CC) $(CFLAGS) $^ -o $@

tam.o: tam.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean