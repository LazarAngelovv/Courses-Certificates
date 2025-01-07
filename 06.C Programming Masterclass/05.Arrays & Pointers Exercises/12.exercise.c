#include <stdio.h>
#include <stdlib.h>

#define N 4
//old way to reverse array
void swap(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void reverseArrayRecursively(int *arr, int n)
{
    if(n > 1)
    {
        swap(arr, arr + n - 1);
        reverseArrayRecursively(arr + 1, n - 2);
    }
}

void printArray(int *arr, int size)
{
    int i;
    for(i = 0; i < size; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int main()
{   
    int arr[N] = {1, 2, 3, 4};
    reverseArrayRecursively(arr, N);
    printArray(arr, N);

    return 0;
}