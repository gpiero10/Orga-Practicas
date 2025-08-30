CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = imp

all: $(TARGET)

$(TARGET): imp.o
	$(CC) $(CFLAGS) $^ -o $@

imp.o: imp.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean