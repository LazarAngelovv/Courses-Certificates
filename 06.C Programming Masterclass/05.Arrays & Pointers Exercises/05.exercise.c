#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
//function to input in array from user
int inputArray(int* arr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("Enter value #%d:", i + 1);
        scanf("%d",&arr[i]);
    }
}
// function to display array
int displayArray(int* arr, int size)
{
    int i;
    for(i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int grades[SIZE];
    inputArray(grades, SIZE);
    displayArray(grades,SIZE);
    
    return 0;
}