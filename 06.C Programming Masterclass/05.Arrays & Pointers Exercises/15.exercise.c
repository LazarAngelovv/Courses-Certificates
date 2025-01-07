#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//print and create Array functions
void printArray(int *arr, int size)
{
    int i;
    for( i = 0; i < size; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
}

int *createArray()
{
    int i;
    int myArr[SIZE];

    printf("Enter %d elements to your array.\n", SIZE);
    
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter number %d: ",i);
        scanf("%d", &myArr[i]);
    }
    return myArr;
}

int main()
{
    int *arr;
    arr = createArray();
    printArray(arr, SIZE);

    return 0;
}