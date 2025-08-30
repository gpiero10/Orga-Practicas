CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = rota

all: $(TARGET)

$(TARGET): rota.o
	$(CC) $(CFLAGS) $^ -o $@

rota.o: rota.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean