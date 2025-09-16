#include <stdlib.h>
#include <stdio.h>

void allocateArray(int **arr, int size, int value) {
    *arr = (int*)malloc(size * sizeof(int));
    if(*arr != NULL) {
        for(int i=0; i<size; i++) {
            (*arr)[i] = value;
        }
    }
}

int main(){
    // Uso
    int *vector = NULL;
    allocateArray(&vector,5,2003); // intuicion: le paso la direccion de un puntero es como un puntero a un puntero
    for(int i = 0; i < 5; i++)
    printf("%d\n", vector[i]);
    free(vector);
    /*
    4. La analogía

    Pasar un puntero = "te paso una copia de la llave". Si cambiás la llave, yo no me entero.

    Pasar la dirección de un puntero = "te paso la caja fuerte donde guardo la llave".
    Si metés otra llave ahí, yo después abro con esa.
    */
    return 0;
}