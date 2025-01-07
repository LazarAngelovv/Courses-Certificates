#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr, int size)
{
    int i;
    printf("Array Values: \n");
    for(i = 0;i < size; i++)
        printf("%d",arr[i]);
    printf("\n");
}

void generateOddEven(int *sourceArray, int size)
{
    int i;
    int *oddArray;
    int *evenArray;
    int oddArraySize = 0;
    int evenArraySize = 0;
    int oddArrayIndex = 0;
    int evenArrayIndex = 0;
    
    for(i = 0; i < size; i++)
    if(sourceArray[i] % 2 == 0)
    {
        evenArraySize++;
    }
    else
    {
        oddArraySize++;
    }
    evenArray = malloc(sizeof(int) * evenArraySize);
    oddArray = malloc(sizeof(int) * oddArraySize);

    for(i = 0; i < size; i++)
    {
        if(sourceArray[i] % 2 == 0)
        {   
            evenArray[evenArrayIndex] = sourceArray[i];
            evenArrayIndex++;
        }
        else
        {
            oddArray[oddArrayIndex] = sourceArray[i];
            oddArrayIndex++;
        }
    }
    printf("Odd Array Values: \n");
    printArray(oddArray,oddArraySize);

    printf("Even Array Values: \n");
    printArray(evenArray,evenArraySize);

    free(oddArray);
    free(evenArray);
}

int main()
{
    int originalArray[] = {12, 5, 7, 8, 3, 10, 4, 9};
    printf("Source/Original Array Values: ");
    printArray(originalArray, 8);
    generateOddEven(originalArray,8);

    return 0;
}