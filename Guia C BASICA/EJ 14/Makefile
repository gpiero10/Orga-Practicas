CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = vares

all: $(TARGET)

$(TARGET): vares.o
	$(CC) $(CFLAGS) $^ -o $@

vares.o: vares.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean