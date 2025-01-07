#include <stdio.h>
#include <stdlib.h>

int *createNoDuplexArray(int *sourceArray, int size, int *newSize)
{
    int i, j = 0;
    int count = 1;
    int *noDuplexArray;

    for(i = 0; i < size - 1; i++)
    {
        if(sourceArray[i] != sourceArray[i + 1])
            count++;
    }

    noDuplexArray = malloc(sizeof(int) * count);

    for(i = 0; i < size - 1; i++)
    {
        if(sourceArray[i] != sourceArray[i + 1])
        {
            noDuplexArray[j] = sourceArray[i];
            j++;
        }
    }

    noDuplexArray[j] = sourceArray[size - 1]; // Add the last element to the new array

    *newSize = count; // Store the new size in the variable pointed to by newSize

    return noDuplexArray;
}

int main()
{
    int originalArray[] = {1, 3, 3, 5, 6, 7, 7, 7, 8, 12, 12};
    int originalSize = sizeof(originalArray) / sizeof(originalArray[0]);

    int newSize;
    int *noDuplexArray = createNoDuplexArray(originalArray, originalSize, &newSize);

    printf("Original Array: \n");
    for (int i = 0; i < originalSize; i++)
    {
        printf("%d ", originalArray[i]);
    }

    printf("No Duplex Array: \n");
    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", noDuplexArray[i]);
    }

    free(noDuplexArray);

    return 0;
}
