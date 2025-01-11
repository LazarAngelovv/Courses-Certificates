#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

//Insertion Sort
int main()
{
    int i;
    int j;
    int key;
    int arr[] = {45, 20, 67, 13, 27, 63};

    for ( i = 0; i < SIZE; i++)
    {
        key = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > key)
            {
                arr[j + 1] =arr[j];
                j = j - 1;

            }
            arr[j + 1] = key;
    }
             
    for(i = 0; i < SIZE ; i++)
    {
        printf("[%d]",arr[i]);
    }
   
    return 0;
}


