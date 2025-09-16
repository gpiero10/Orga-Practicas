#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct persona {
    char *nombre;
    int edad;
} persona_t;

persona_t* crearPersona(char *name, int age){
    persona_t *masturbinho = malloc(sizeof(persona_t)); //reservo espacio

    masturbinho->nombre = malloc(strlen(name) + 1); //reservo espacio para el nombre

    strcpy(masturbinho->nombre, name); // copio el nombre

    masturbinho->edad = age;
    return masturbinho;
}

void batar(persona_t* p){
    free(p->nombre);
    free(p);
}


int main(){
    persona_t* Mastan = crearPersona("Masturbinho", 18);
    printf("Nombre: %s, Edad: %d\n", Mastan->nombre, Mastan->edad);
    batar(Mastan);
    return 0;
}