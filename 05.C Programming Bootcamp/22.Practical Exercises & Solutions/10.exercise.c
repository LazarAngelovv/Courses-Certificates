#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SIZE 4
//A program to find two elements wich sum is closest to zero

int main()
{
    int i;
    int j;

    int values[SIZE] = { -1, 2, 3, -6};
   
    int minSum = values[0] + values [1];
    int currentSum;

    for(i = 0; i < SIZE ; i++)
    {
        for(j = i + 1; j < SIZE ; j++)
        {
            currentSum = values[i] + values[j];
            if(abs(currentSum) < abs(minSum))
               minSum = currentSum;
        }
    }
    
    return 0;
}