#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
//find the sum of array
int sumArray(int arr[],int size)
{
    int i, sum = 0;
    for(i = 0;i < size; i++)
        sum = sum + arr[i];
    return sum;
}

int main()
{
    int grades[3] = {3,5,7};
    int result;
    result = sumArray(grades, 3);
    printf("Sum = %d\n", result);

    return 0;
}