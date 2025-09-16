CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = whi

all: $(TARGET)

$(TARGET): whi.o
	$(CC) $(CFLAGS) $^ -o $@

whi.o: whi.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean