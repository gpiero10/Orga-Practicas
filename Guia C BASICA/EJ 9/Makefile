CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = comp

all: $(TARGET)

$(TARGET): comp.o
	$(CC) $(CFLAGS) $^ -o $@

comp.o: comp.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean