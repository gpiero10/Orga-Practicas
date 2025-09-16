CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = feli2

all: $(TARGET)

$(TARGET): feli2.o
	$(CC) $(CFLAGS) $^ -o $@

feli2.o: feli2.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean