#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int arraySize;
    scanf("%d", &arraySize);
    
    a = calloc(arraySize, sizeof(int));

    return 0;
}
