#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a;
    int rows, cols;
    printf(" Please enter number of rows: ");
    scanf("%d", &rows);

    a = (int**)calloc(rows, sizeof(int*));
    
    for(int i = 0; i < rows; i++)
    {
        printf("Enter number of columns: ");
        scanf("%d", & cols);
        a[i] = calloc(cols, sizeof(int));
    }

    return 0;
}