#include <stdio.h>

void rotate_left(unsigned int x, unsigned char n) {
    unsigned int result = (x << n) | (x >> (sizeof(x)*8 - n));
    printf("Rotated value: 0x%X\n", result);
}

int main() {
    
    unsigned int x = 0x12345678;
    unsigned char n1 = 4;
    unsigned char n2 = 20;
    unsigned char n3 = 2;
    
    rotate_left(x, n1);
    rotate_left(x, n2);
    rotate_left(x, n3);
    printf("%d",sizeof(x));
    
    return 0;
}