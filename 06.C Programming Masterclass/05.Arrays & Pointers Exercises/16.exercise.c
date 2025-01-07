#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

// Function to check if the function is palindrom 
int isArrayPlaindrom(int *arr, int size)
{
    if(size <= 1 )
        return 1;
    if(arr[0] != arr[size -1])
        return 0;
    else
        return isArrayPlaindrom(arr + 1,  size -2);
}

int main()
{
    int arr[SIZE] = {1, 2, 3, 2, 1};
    int result = isArrayPlaindrom(arr, SIZE);
    printf("%d", result);

    return 0;
}