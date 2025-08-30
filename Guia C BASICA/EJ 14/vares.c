#include <stdio.h>

int valor = 10;  // variable global

int main() {
    int valor = 20;  // variable local con el mismo nombre

    printf("Variable valor: %d\n", valor);

    return 0;
}