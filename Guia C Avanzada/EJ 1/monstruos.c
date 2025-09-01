#include <stdio.h>
#include <stdint.h>

typedef struct monstruo {
    char nombre[50];
    int vida;
    double ataque;
    double defensa
} monstruo_t;

int main(){
    monstruo_t monstruos[3] = {
        {"Benedetto", 100, 84, 31},
        {"Seba Villa", 100, 87, 24},
        {"Blanco", 100, 79, 75}
    };
    
    for (int i = 0; i < 3; i++){
        printf("Monstruo de la noche: %s y su vida: %i\n", monstruos[i].nombre, monstruos[i].vida);
    }


    return 0;
}