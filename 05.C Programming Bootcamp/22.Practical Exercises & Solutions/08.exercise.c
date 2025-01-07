#include <stdio.h>
#include <stdlib.h>

//Rotate left given array by (n) position
#define SIZE 4
#define N 2

int main()
{
    int valuesArr[SIZE];
    int i;
    int k;
    int temp = valuesArr[0];
    
    for(k = 0; k < N; k++)
    {
        for(i = 0; i < SIZE; i++)
        {    
            valuesArr[i - 1] = valuesArr[i];  
        }
        valuesArr[SIZE - 1] = temp;
    }

    return 0;
}