CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = int-anch

all: $(TARGET)

$(TARGET): int-anch.o
	$(CC) $(CFLAGS) $^ -o $@

int-anch.o: int-anch.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean