#include <stdio.h>
#include <stdlib.h>

//Using define 
#define SIZE 7

int main()
{
    int arr[SIZE];
    int i;
    int max;
    max = arr[0];

    for(i = 0; i < SIZE; i++)
    {
        printf("Enter number no.%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < SIZE; i++)
    {
        if(arr[i] > max[i])
            max = arr[i];
    }
   
    printf("Index of max digit is: [ %d ] \n", max -1);// - 1 because index starts from 0 

    return 0;
}