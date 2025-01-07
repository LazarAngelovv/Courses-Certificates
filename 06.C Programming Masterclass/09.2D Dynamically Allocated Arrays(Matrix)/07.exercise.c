#include <stdio.h>
#include <stdlib.h>

// Function to create an upper triangular matrix
int** createUpperTriangular(int n)
{
    int** a; // Declare a pointer-to-pointer variable to store the upper triangular matrix

    a = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)   // Iterate through each row of the upper triangular matrix
    {
        a[i] = malloc((n - i) * sizeof(int));  // Allocate memory for each row, with the size decreasing as we move down the matrix
    }

    return a; // Return the pointer to the upper triangular matrix
}

// Function to create a lower triangular matrix
int** createLowerTriangular(int n)
{
    int** a;
    
    // Allocate memory for the outer pointer array
    a = malloc(n * sizeof(int*));

    // Iterate through each row of the lower triangular matrix
    for (int i = 0; i < n; i++)
    {
        // Allocate memory for each row, with the size increasing as we move down the matrix
        a[i] = malloc((i + 1) * sizeof(int));
    }

    return a; // Return the pointer to the lower triangular matrix
}

void print2DArray(int **arr, int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int** result1 = createLowerTriangular(5);
    int** result2 = createUpperTriangular(5);
    print2DArray(result1, 5, 5);    

    return 0;
}