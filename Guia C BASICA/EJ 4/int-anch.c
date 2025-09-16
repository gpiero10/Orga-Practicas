#include <stdio.h>
#include <stdint.h>

int main() {
    int8_t x1 = 7;
    uint8_t x2 = 15;
    int16_t x3 = 2658;
    uint16_t x4 = 2658;
    int32_t a = 777;
    uint32_t a2 = 777;
    int64_t b1 = 777;
    uint64_t b2 = 777;

    printf("int8_t(%lu): %d \n", sizeof(x1),x1);
    printf("uint8_t(%lu): %d \n", sizeof(x2),x2);
    
    printf("int16_t(%lu): %d \n", sizeof(x3),x3);
    printf("uint16_t(%lu): %d \n", sizeof(x4),x4);

    printf("int32_t(%lu): %d \n", sizeof(a), a);
    printf("uint32_t(%lu): %d \n", sizeof(a2),a2);

    printf("int64_t(%lu): %d \n", sizeof(b1),b1);
    printf("uint64_t(%lu): %d \n", sizeof(b2),b2);

    return 0;
}