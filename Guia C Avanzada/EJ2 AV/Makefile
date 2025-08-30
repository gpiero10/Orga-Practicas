CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = evo

all: $(TARGET)

$(TARGET): evo.o
	$(CC) $(CFLAGS) $^ -o $@

evo.o: evo.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean