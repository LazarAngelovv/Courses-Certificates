#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int findSecondSmallest(int *arr, int size)
{
    int i;
    int min1 = arr[0];
    int min2 = arr[1];  // Initialize min2 with arr[1]
    
    if (min2 < min1) {
        // Swap min1 and min2 if necessary
        int temp = min1;
        min1 = min2;
        min2 = temp;
    }
    
    for (i = 2; i < size; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1) // Add condition to avoid duplicates
        {
            min2 = arr[i];
        }
    }
    
    return min2;
}

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5};
    int result = findSecondSmallest(arr, SIZE);
    printf("%d", result);
    
    return 0;
}