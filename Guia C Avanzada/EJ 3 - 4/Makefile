CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = puntita

all: $(TARGET)

$(TARGET): puntita.o
	$(CC) $(CFLAGS) $^ -o $@

puntita.o: puntita.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean