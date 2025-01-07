#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//function to chek if the array is really sorted recursively
int checkIsSortedRecursive(int *arr, int size, int *isReallySorted)
{
    if (size == 1)
    {
        *isReallySorted = 1;
        return 1;
    }

    int result = checkIsSortedRecursive(arr, size - 1, isReallySorted);

    if (result != 0 && arr[size - 1] < arr[size - 2])
    {
        *isReallySorted = 0;
        return 0;
    }

    return result;
}

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int isReallySorted = 0;
    int result = checkIsSortedRecursive(arr, SIZE, &isReallySorted);

    if (isReallySorted)
    {
        printf("The array is sorted.\n");
    }
    else
    {
        printf("The array is not sorted.\n");
    }
    
    return 0;
}
