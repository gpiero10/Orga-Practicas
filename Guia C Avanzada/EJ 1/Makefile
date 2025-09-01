CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = monstruos

all: $(TARGET)

$(TARGET): monstruos.o
	$(CC) $(CFLAGS) $^ -o $@

monstruos.o: monstruos.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean