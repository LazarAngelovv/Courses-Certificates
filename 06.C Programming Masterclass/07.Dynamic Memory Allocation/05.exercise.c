#include <stdio.h>
#include <stdlib.h>

//reallocate memory funciton
int *reallocate(int *oldArr, int oldSize, int newSize)
{
    int i;
    int *newArr = (int*)malloc(oldSize * sizeof(int));
    for(i = 0;i < oldSize; i++)
    {
        newArr[i] = oldArr[i];
    }
    free(oldArr);
    return newArr;
}

int main()
{
    int *gradesArray;
    int i, totalGrades;
    
    scanf("%d", &totalGrades);
    
    gradesArray = malloc(sizeof(int)* totalGrades);

    if(gradesArray != NULL)
    {
        printf("Allocation Succeded! \n");
    }
    else
    {
        printf("Allocation Failed. \n");
        exit(1);
    }

    for(i = 0 ; i < totalGrades; i++)
    {
        printf("Enter Grade %d: ", i + 1);
        scanf(" %d", &gradesArray[i]);
    }
    
    return 0;
}