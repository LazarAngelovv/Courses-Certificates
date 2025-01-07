#include <stdio.h>
#include <stdlib.h>

void print2DDynamicMatrix(int** a, int rows, int columns)
{
    int i, j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < columns; j++)
        {
            printf("%10d",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    // Example usage of the print2DDynamicMatrix() function
    int rows = 3;
    int columns = 4;
    
    // Allocate memory for the 2D dynamic matrix
    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int*)malloc(columns * sizeof(int));
    }
    // Initialize the matrix with some values
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = i * columns + j + 1;
        }
    }
    // Print the matrix using the print2DDynamicMatrix() function
    print2DDynamicMatrix(matrix, rows, columns);

    return 0;
}