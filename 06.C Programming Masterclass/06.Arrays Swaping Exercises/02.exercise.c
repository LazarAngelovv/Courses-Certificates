#include <stdio.h>
#include <stdlib.h>

//swap array O1
void swapArrayO1(int **ptr1, int **ptr2)
{
    void *temp; 
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
void printArr(int *arr)
{
    int i;
    for(i = 0; i < SIZE; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int *generateArray(int size)
{
    int i;
    int *arr;
    arr = (int*)malloc(size *sizeof(int));
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return arr;
}

int main()
{
    int sizeArray1, sizeArray2;
    int *Array1, *Array2;
    printf("Enter size for Array1: ");
    scanf("%d", &sizeArray1);
    
    printf("Enter size for Array2: ");
    scanf("%d", &sizeArray2);

    Array1 = generateArray(sizeArray1);
    Array2 = generateArray(sizeArray2);

    swapArrayO1(&Array1,&Array2);

    printArr(Array1);
    printArr(Array2);
    
    return 0;
}