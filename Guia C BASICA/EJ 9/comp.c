#include <stdio.h>
#include <stdint.h>

int main(){
    uint32_t p1 = 0xAB755669;
    uint32_t p2 = 0xDF45BC75;

    uint32_t m1 = 0xE0000000;
    uint32_t m2 = 0x00000007;

    uint32_t r1 = (p1 & m1) >> 29;
    uint32_t r2 = p2 & m2;
    if (r1 == r2){
        printf("Los 3 bits mas significativos de p1 son iguales a los mas bajos de p2");
    } else {
        printf("No no no no no son iguales tururururu");
    }

    return 0;
}