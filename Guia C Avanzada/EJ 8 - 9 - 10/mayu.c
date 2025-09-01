#include <stdio.h>

void pasarAMayus(char *stringus){
    char *temp = stringus;
    while (*temp != '\0'){
        if ('a' <= *temp && *temp <= 'z'){
            *temp -= 32; 
        }
        temp ++;
    }
    return;
}


int main(){
    char messi[] = "Morite Tapia\n";
    pasarAMayus(messi);
    printf("output: %s", messi);
    return 0;
}