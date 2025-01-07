#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1;
    int num2;

    printf("Please enter a number 1: ");
    scanf("%d", &num1);

    printf("Please enter a number 2: ");
    scanf("%d", &num2);

    if(num1 == num2)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    
    return 0;
}