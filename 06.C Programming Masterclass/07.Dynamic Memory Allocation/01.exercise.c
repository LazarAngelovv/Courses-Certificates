#include <stdio.h>
#include <stdlib.h>

int main()
{
    double *bArr;
    int *a;
    int arraySize;
    
    scanf("%d", &arraySize);
    
    a = (int*)malloc(sizeof(int) * arraySize);
    bArr = (double*)malloc(sizeof(double)* arraySize);
    
    if(bArr != NULL)
        printf("Allocation Succeded\n");
    else
        printf("Allocation Filed");

    return 0;
}