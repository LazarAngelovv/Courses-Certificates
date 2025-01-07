#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    int temp;

    printf("Value of 'a' is: %d\nValue of 'b' is: %d\n",a , b);

    temp = a;
    a = b;
    b = temp;

    printf("Value of 'a' after swap is: %d\nValue of 'b' after swap is: %d\n",a , b);

    return 0;
}