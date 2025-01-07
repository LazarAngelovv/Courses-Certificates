#include <stdio.h>
#include <stdlib.h>

//Print 2D Array
int main()
{
    int my2DArray [2][3] = {{1, 5, 9}, {2, 6 ,10}};

    for(int i = 0; i < 2; i++)//go over all rows
    {
        for(int j = 0;j < 3; j++)// go over all columns
        {
            printf("%d ", my2DArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}