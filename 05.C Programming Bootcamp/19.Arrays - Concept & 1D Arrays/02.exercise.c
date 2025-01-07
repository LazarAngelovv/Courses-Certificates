#include <stdio.h>
#include <stdlib.h>

//Find element number of max digit
int main()
{
    int arr[10] = {1, 4, 0, 2, 9, 4, 5};
    int i;
    int max;
    max = arr[0];
   
    for(i = 1; i < 7; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    printf("Max digit in your phone number is: %d \n", max);

    return 0;
}