#include <stdio.h>
#include <stdlib.h>

//Find index of max digit 
int main()
{
    int arr[7];
    int i;
    int max;
    max = arr[0];

    for(i = 0; i < 7; i++)
    {
        printf("Enter number no.%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for(i = 1; i < 7; i++)
    {
        if(arr[i] > max = arr[i])
            max = arr[i];
    }
    printf("Index of max digit is: [ %d ] \n", max -1);// - 1 because index starts from 0 

    return 0;
}