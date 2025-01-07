#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
//Array swap
void swap(int * val1, int *val2)
{
    int temp;
    temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
void swapON(int *arr1, int *arr2)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        swap(&arr1[i], &arr2[i]);
    }
}
void swapArrayO1(void **ptr1, void **ptr2)
{
    int *temp;
    temp = *ptr1;
    *ptr2 = *ptr2;
    *ptr2 = temp;
}
void printArr(int * arr)
{
    int i;
    for(i = 0; i < SIZE; i++)
        printf("%d", arr[i]);
    printf("\n");

int *generateArray(int size)
{
    int i;
    int *arr;
    arr = (int*)malloc(size*sizeof(int));
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    return arr;
}
    
}
int main()
{
    int sizeArr1, sizeArr2;
    int *Arr1, *Arr2;

    printf("Enter size for Array1:");
    scanf("%d",&sizeArr1);

    printf("Enter size for Array2:");
    scanf("%d",&sizeArr2);


    printf("Hello world!\n");
    int Array1[SIZE] = {1, 3, 6, 8, 10};
    int Array2[SIZE] = {2, 2, 4, 11, 17};
    
    printf("Array values before swap\n");
    printArr(Array1);
    printArr(Array2);
    
    swapON(Array1,Array2);
    
    printf("Array values after swap\n");
    printArr(Array1);
    printArr(Array2);

    return 0;
}