#include <stdio.h>
#include <stdlib.h>

#define SIZE
//update average behind the scenes 
void updateAverage(int num1, int num2, float* avg)
{
    *avg = (num1 + num2) / 2.0;
}

int main()
{
    int a, b;
    float average;

    printf("Enter the value for variable 'a': ");
    scanf("%d", &a);
    printf("Enter the value for variable 'b': ");
    scanf("%d", &b);

    updateAverage(a,b, &average);

    printf("Average = %f\n", average);

    return 0;
}