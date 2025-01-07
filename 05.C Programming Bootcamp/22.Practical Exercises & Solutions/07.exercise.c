#include <stdio.h>
#include <stdlib.h>

//Rotate left given array by one position
#define SIZE 4

int main()
{
    int valuesArr[SIZE];
    int i;
    int temp = valuesArr[0];

    for(i = 0; i < SIZE; i++)
    {
        valuesArr[i - 1] = valuesArr[i];
    }
    valuesArr[SIZE -1] = temp;

    return 0;
}