CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = mayu

all: $(TARGET)

$(TARGET): mayu.o
	$(CC) $(CFLAGS) $^ -o $@

mayu.o: mayu.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean