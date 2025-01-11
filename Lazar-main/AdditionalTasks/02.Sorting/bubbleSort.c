#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

//Bubble Sort
int main()
{
    int i;
    int j;
    int arr[] = {45, 20, 67, 13, 27, 63};

    for ( i = 0; i <= SIZE ; i++)
    {
        for(j = 0; j <= SIZE - i; j++)
        {
            if(arr[j] > arr[j + 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for(i = 0; i < SIZE ; i++)
    {
        printf("%d",arr[i]);
    }
    
    return 0;
}