#include <stdio.h>
#include <stdint.h>

int main(){
    float a = 0.1;
    printf("float: %f \n", a);
    double b = 0.1;
    printf("double: %f \n", b);

    int c = (int) a;
    printf("de float a int: %d \n", c);
    int d = (int) b;
    printf("de double a int: %d \n", d);

    /*Se pierde info naturalmente :p */

    return 0;
}