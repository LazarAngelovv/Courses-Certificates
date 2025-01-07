#include <stdio.h>
#include <stdlib.h>

void create1DArrayByRef(int arrSize,int **p)
{
    int *newArr;
    int i;
    newArr = malloc(sizeof(int) * arrSize);
    for(i = 0; i < arrSize; i++)
    {
        printf(" Enter value: ");
        scanf(" %d", &newArr[i]);
    }
}

int main()
{
    int size;
    int *ptr;
    printf("Enter the desired size of the array: ");
    scanf("%d", &size);

    create1DArrayByRef(size, &ptr);
    
    return 0;
}