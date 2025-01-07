#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
//function to find if previous elemenet and next element are equal to the element in the middle
int hasNeighbors(int *arr, int size)
{
    int i;
    for(i = 1; i < size -1; i++)
    {
        if(arr[i] == arr[i - 1] + arr[i])
            return 1;
    }
    return 0;
}

int main()
{
    int arr[SIZE] = { 1, 3, 4, 5,};
    hasNeighbors(&arr, SIZE);

    return 0;
}