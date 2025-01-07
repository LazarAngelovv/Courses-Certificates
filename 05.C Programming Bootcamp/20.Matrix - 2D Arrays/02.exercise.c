#include <stdio.h>
#include <stdlib.h>

//Multiplication Table
#define SIZE 11

int main()
{
    int i;
    int j;
    int mat[SIZE][SIZE];

    for(i = 1; i < SIZE; i++)
    {
        for(j = 1; j < SIZE; j++)
            mat[i][j] = i * j;
    }

    for(i = 1; i < SIZE; i++)
    {
        for(j = 1; j < SIZE; j++)  
        {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}