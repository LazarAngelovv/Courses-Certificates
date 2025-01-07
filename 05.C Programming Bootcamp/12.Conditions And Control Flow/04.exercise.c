#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;

    printf("Enter num 1: ");
    scanf("%f", &num1);

    printf("Enter num 2: ");
    scanf("%f", &num2);

    if(num1 > num2)
    {
        printf("MAXIMUM = %.2f \n", num1);
        printf("MINIMUM = %.2f \n,", num2);
    }
    else
    {
        printf("MAXIMUM = %.2f \n", num2);
        printf("MINIMUM = %.2f \n,", num1);
    }

    return 0;
}