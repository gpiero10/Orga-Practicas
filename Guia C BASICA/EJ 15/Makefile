CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = facto

all: $(TARGET)

$(TARGET): facto.o
	$(CC) $(CFLAGS) $^ -o $@

facto.o: facto.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean