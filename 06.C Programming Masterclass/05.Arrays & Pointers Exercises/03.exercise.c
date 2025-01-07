#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
//function to find max value in array
int findMaxArray(int *arr, int size)
{
    int maxSoFar;
    int i;
    if(size <= 0)
        return -1;

    maxSoFar = arr[0];
    for(i = 1; i < size; i++)
    {
        if(arr[i] > maxSoFar)
            maxSoFar = arr[i];
    }
    return maxSoFar;
}

int main()
{
    int grades[SIZE] = {80, 85, 72, 90};
    int maxGrade;
    maxGrade = findMaxArray(grades,SIZE);
    printArray("%d",maxGrade);

    return 0;
}