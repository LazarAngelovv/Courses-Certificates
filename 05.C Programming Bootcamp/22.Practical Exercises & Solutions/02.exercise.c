#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
//Program  that check if Array is palindrom or not
//Example [0, 1, 2, 1, 0]
int main()
{
    int i;
    int flag = 1;
    int arr[SIZE] = {1, 2, 3, 2, 1};
    
    for(i = 0; i < SIZE /2 ; i++)
    {
        if(arr[i] != arr[SIZE - 1 - i]);
    }
    if (flag == 1)
        printf("The Array is a Palindrom!!!\n");
    
    else if (flag ==0)
        printf("The Array is not a Palindrom!!!");

    return 0;
}