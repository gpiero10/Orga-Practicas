CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = rotagen

all: $(TARGET)

$(TARGET): rotagen.o
	$(CC) $(CFLAGS) $^ -o $@

rotagen.o: rotagen.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean