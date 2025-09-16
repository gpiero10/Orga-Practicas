#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    int c = 2;
    int d = 1;

    printf("a + b * c / d = %d\n", a + b * c / d);
    printf("a %% b = %d\n", a % b);      // %% para imprimir %
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("~a = %x\n", ~a);              // hexadecimal
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("a << 1 = %d\n", a << 1);
    printf("a >> 1 = %d\n", a >> 1);

    int temp;
    temp = a; printf("a += b = %d\n", (temp += b));
    temp = a; printf("a -= b = %d\n", (temp -= b));
    temp = a; printf("a *= b = %d\n", (temp *= b));
    temp = a; printf("a /= b = %d\n", (temp /= b));
    temp = a; printf("a %%= b = %d\n", (temp %= b));

    return 0;
}