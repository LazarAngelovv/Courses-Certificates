#include <stdio.h>
#include <stdlib.h>

//print binary representation of number
void printBinary(int n)
{
    if (n <= 1)
        printf("%d", n);
    else
    {
        printBinary(n / 2);
        printf("%d", n % 2);
    }
}

int main()
{
    printBinary();
    printf("\n");
    return 0;
}