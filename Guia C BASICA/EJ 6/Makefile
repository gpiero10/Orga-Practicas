CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = deco

all: $(TARGET)

$(TARGET): deco.o
	$(CC) $(CFLAGS) $^ -o $@

deco.o: deco.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean