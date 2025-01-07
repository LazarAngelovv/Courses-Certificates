#include <stdio.h>
#include <stdlib.h>

//Copy Array function
void allocateAndCopyArray(int *original,int sizeOriginal, int **target)
{
    int i;
    *target = malloc(sizeof(int) * sizeOriginal);

    if(*target != NULL)
    {
        for(i = 0; i < sizeOriginal;i++)
        {
            (*target)[i] = origina[i];
        }
    }
}

int main()
{
    int arrOriginal[3] = {1, 5, 4};
    int* copiedArr;

    allocateAndCopyArray(arrOriginal,3, &copiedArr);
    printf("Copied Arr Values");
    for(i = 0; i < 3; i++)
    {
        printf(" %d", copiedArr[i]);
    }
    free(copiedArr);

    return 0;
}