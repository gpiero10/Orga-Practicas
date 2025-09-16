#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void bucket(int a[]){
    for(int i = 0; i < 60000000; i++){
        int n = rand();
        a[n % 6] += 1;
    }
}


int main(){
    int array[6] = {0};

    srand(time(NULL));    // iniciar semilla aleatoria
    
    bucket(array);
    for(int i = 0;i < 6; i++){
        printf("Cara %d: %d\n", i+1,array[i]);
    }
    return 0;
}
