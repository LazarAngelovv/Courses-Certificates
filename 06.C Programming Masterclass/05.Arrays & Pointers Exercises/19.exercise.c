#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//print array recursive
void printArrayRecursive(int *arr, int size)
{
    if(size > 0)
    {
        printf("%d", arr[0]);
        printArrayRecursive(arr + 1, size -1);
    }
    printf("\n");
}

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArrayRecursive(arr, SIZE);

    return 0;
}