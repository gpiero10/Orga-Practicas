#include <stdio.h>

int factorial(int n){
    if (n <= 1){
        return n;
    }
    else {
        return n*factorial(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    int m = factorial(n);
    printf("%d! es igual a: %d\n",n,m);
}