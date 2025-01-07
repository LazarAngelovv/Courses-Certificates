#include <stdio.h>
#include <stdlib.h>

int findMinMax(int num1, int num2, int *pMax, int *pMin)
{
    if(num1 > num2)
    {
         *pMin = num2;
         *pMax = num1;
    }
    else
    {
         *pMin = num1;
         *pMax = num2;
    }
}

void main()
{
    int a = 5;
    int b = 7;

    int max;
    int min;
    findMinMax(a,b,&max,&min);
    
    printf("Min between %d %d = %d \n", a,b,min);
    printf("Max between %d %d = %d \n", a,b,max);
}