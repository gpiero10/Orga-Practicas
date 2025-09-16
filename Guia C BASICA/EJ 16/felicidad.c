#include <stdio.h>
#define FELIZ 0
#define TRISTE 1

void ser_feliz(int estado);
void print_estado(int estado);

int main(){
    int estado = TRISTE; // automatic duration. Block scope
    ser_feliz(estado);
    print_estado(estado); // qué imprime? imprime triste porque el
    // llamado a ser_feliz copia estado, la reescribe pero cuando termina la funcion
    // esta ultima variable desaparece junto con la funcion.
}

void ser_feliz(int estado){
    estado = FELIZ;
}

void print_estado(int estado){
    printf("Estoy %s\n", estado == FELIZ ? "feliz" : "triste");
}