#include <stdio.h>
#include <stdlib.h>
//Rotate right given array by (n) position
#define SIZE 4
#define N 2
int main()
{

    int i;
    int k;
    int temp;
    int valuesArr[SIZE] = { 5, 4, 7, 3};
 
    for(k = 0; k < N; k++)
    {
        temp = valuesArr[0];
        for(i = SIZE - 1; i > 0; i--)
        {    
            valuesArr[i] = valuesArr[i - 1];  
        }
        valuesArr[0] = temp;
    }
   
    return 0;
}