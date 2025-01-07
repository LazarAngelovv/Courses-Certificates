#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//allocate memory for array
void printArr(int *arr)
{
    int i;
    for(i = 0; i < SIZE; i++)
        printf("%d", arr[i]);
    printf("\n");
}

int *createArray()
{
    int i;

    int *myArr;
    myArr = (int*)malloc(sizeof(int)*SIZE);
    if(!myArr)
    {
        printf("You've got some Error when trying to allocate..Check your memory \n");
        exit(1);
    }
    printf("Enter %d elements to your array. \n",SIZE);
    for(i = 0; i < SIZE; i++)
    {
        printf("Enter elements for array: ");
        scanf("%d", &myArr[i]);
    }
    return myArr;
}

int main()
{
    int *arr;
    arr = createArray();
    printArr(arr);

    return 0;
}