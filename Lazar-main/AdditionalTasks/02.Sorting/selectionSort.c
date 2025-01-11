#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

//Selection Sort
int main()
{
    int i;
    int j;
    int arr[] = {45, 20, 67, 13, 27, 63};

    for ( i = 0; i < SIZE; i++)
    {
        for(j = i + 1; j < SIZE; j++)
        {
            if(arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i = 0; i < SIZE ; i++)
    {
        printf("[%d]",arr[i]);
    }

    return 0;
}