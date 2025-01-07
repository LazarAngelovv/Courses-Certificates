#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades[3] = {80,90,85};
    return 0;
}

void findAverage(int *gradesArray, int size)
{
    int totalSum = 0;
    int i;
    for(i = 0; i < size; i++)
    {
        totalSum += gradesArray[i];
        size = size - 1;
    }
    printf("Average Grade = %lf\n", totalSum/size);
}