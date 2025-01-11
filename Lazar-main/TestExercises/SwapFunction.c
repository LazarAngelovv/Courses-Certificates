#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithBitwiseOperations(int *a, int *b)
{
    *a = *a^*b;
    *b = *a^*b;
    *a = *a^*b;
}

int main()
{
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    printf("\n");

    printf("Before swap: a = %d, b = %d\n", a, b);
    swapWithBitwiseOperations(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}