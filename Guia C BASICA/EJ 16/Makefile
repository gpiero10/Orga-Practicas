CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = felicidad

all: $(TARGET)

$(TARGET): felicidad.o
	$(CC) $(CFLAGS) $^ -o $@

felicidad.o: felicidad.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean