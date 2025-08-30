CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = dif

all: $(TARGET)

$(TARGET): dif.o
	$(CC) $(CFLAGS) $^ -o $@

dif.o: dif.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean