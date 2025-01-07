#include <stdio.h>
#include <stdlib.h>

#define SIZE 7

int findTarget(int *arr, int size, int target)
{
    int i, j;
    
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++) // Start j from i + 1 to avoid comparing the same element
        {
            if (arr[i] + arr[j] == target)
            {
                printf("Numbers %d + %d = %d\n", arr[i], arr[j], target);
                return 1; // Return 1 to indicate success
            }
        }
    }
    
    return 0; // Return 0 to indicate failure
}

int main()
{
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7};
    int target = 9;
    int result = findTarget(arr, SIZE, target);
    
    if (result == 0)
    {
        printf("No pair found with the target sum.\n");
    }
    printf("%d", result);

    return 0;
}