#include <stdio.h>
#include <stdlib.h>

void swapRows(void** a, int row1, int row2 )
{
    void *temp;
    temp = a[row1];
    a[row1] = a[row2];
    a[row2] = temp;
}

void swapColumns(void** a, int column1, int column2, int totalRows)
{
    int i;
    int temp;
    for( i = 0 ; i < totalRows; i++)
    {
        temp = a[i][column1];
        a[i][column1] = a[i][column2];
        a[i][column2] = temp;
    }

}
int main()
{
    return 0;
}    
