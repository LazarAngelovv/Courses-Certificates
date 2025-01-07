#include <stdio.h>
#include <stdlib.h>

void printArr(int *ptr, int size)//Function that print all elements of array
{
    int i;
    for(i = 0;i < size; i++)
    {
        printf("%d", ptr[i]);
    }
}

void resetElemetToZero(int *ptr, int size)//Function that set elements of array to zero
{
    int i;
    for(i = 0; i < size ; i++)
    {
        ptr[i] = 0;
    }
}

int main()
{
    int arr[3] = {1, 3, 10};
    resetElemetToZero(arr, 3);
    printArr(arr,3);
}