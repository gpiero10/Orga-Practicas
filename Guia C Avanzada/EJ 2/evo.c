#include <stdio.h>
#include <stdint.h>

typedef struct monstruo {
    char nombre[50];
    int vida;
    double ataque;
    double defensa
} bostero;


bostero evolution(bostero m){
    bostero evo_m = m;
    evo_m.ataque += 10;
    evo_m.defensa += 10;
    return evo_m;
}



int main(){
    bostero Pipa = {"Benedetto", 100, 84, 31};
    
    printf("Monstruo de la noche: %s y su vida: %i\n Ataque: %lf\nDefensa: %lf\n", Pipa.nombre, Pipa.vida, Pipa.ataque, Pipa.defensa);
    
    bostero Pipa_fernet = evolution(Pipa);

    printf("Pipa evolved: %s y su vida: %i\n Ataque: %lf\nDefensa: %lf\n", Pipa_fernet.nombre, Pipa_fernet.vida, Pipa_fernet.ataque, Pipa_fernet.defensa);

    return 0;
}
