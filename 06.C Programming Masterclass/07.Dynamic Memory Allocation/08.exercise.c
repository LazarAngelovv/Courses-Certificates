#include <stdio.h>
#include <stdlib.h>

int* adjustableReallocation(int *arrSize)
{
    int num, lastIndex = 0, size = 2;
    int* arr = NULL;
    int* temp = NULL;

    printf("Enter num: ");
    scanf("%d", &num);

    if(num == -1)//Empty Array
    {
        return NULL;
    }
    else
    {
        temp = (int*)malloc(size * sizeof(int));
        if(!temp)
            return NULL;
        arr = temp;
    }

    while(num != -1)
    {
        if(lastIndex == size)
        {
            size = size * 2;
            temp = realloc(arr, size * sizeof(int));
            if(!temp) 
                return NULL;
            arr = temp;
        }
        arr[lastIndex] = num;
        lastIndex++;
        printf("Enter num");
        scanf("%d", &num);
    }
    arr = realloc(arr, lastIndex * sizeof(int));
    *arrSize = lastIndex;

    return arr;
}

int main()
{
    int arrSize = 0;
    int *arr = adjustableReallocation(&arrSize);

    if (arr == NULL)
    {
        printf("Empty array!\n");
        return 0;
    }

    printf("Array elements:\n");
    
    for (int i = 0; i < arrSize; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}