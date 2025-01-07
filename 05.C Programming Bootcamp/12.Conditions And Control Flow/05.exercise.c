#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1;
    float num2;
    float num3;
    float max;
    float min;

    printf("Enter num 1: ");
    scanf("%f", &num1);

    printf("Enter num 2: ");
    scanf("%f", &num2);

    printf("Enter num 3: ");
    scanf("%f", &num3);

    if(num1 > num2  )
    {
        max = num1;
        min = num2;
    }
    else
    {   
        min = num1;
        max = num2;
    }
   
    if(max < num3)
    {
       max = num3;
    }
   
    if (min > num3)
    {
        min = num3;
    }

    printf("MAXIMUM between 3 numbers = %.2f\n", max);
    printf("MINIMUM between 3 numbers = %.2f\n", min);

    return 0;
}

