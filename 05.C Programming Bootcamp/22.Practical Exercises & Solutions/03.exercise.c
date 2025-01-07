#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main()
{
    int i;
    int arr[SIZE] = {1, 4, 3, 7, 1};
    int maxSum = arr[0] + arr[1];

    for(i = 0; i < SIZE;i++)
    {
        if(maxSum < arr[i] + arr[i + 1])
        {
            maxSum = arr[i] + arr[i + 1]; 
        }
    }
    printf("Maximum Sum of 2 Neighbors = %d \n", maxSum);

    return 0;
}