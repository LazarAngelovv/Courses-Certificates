#include <stdio.h>
#include <stdlib.h>

void allocate2DMatrixByRef(int*** a, int rows,int columns)
{
    int** myMat;
    int i;
    myMat = (int**)calloc(rows, sizeof(int));
    if(!myMat)
        return NULL;
    for(i = 0; i < rows ;i++)
    {
        myMat[i] = calloc(columns * sizeof(int));
        if(!myMat[i])
        {
            return NULL;
        }
    }
}

int main()
{
    int rows, columns;
    int** mat;
    printf(" Enter rows: ");
    scanf("%d",7 &rows);

    printf(" Enter columns: ");
    scanf("%d", &columns);

    return 0;
}