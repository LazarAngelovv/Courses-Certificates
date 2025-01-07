#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main()
{
    int arr[SIZE] = {0, 5, 4, 9, 5, 8, 2, 3, 1, 5, 4, 9, 5, 5, 2, 7, 6, 5, 4,1};
    int countArr[10] = {0};
    int i;
    int maxIndex;

    for( i = 0; i < SIZE ; i++)
    {
        countArr[arr[i]]++;    
    }
    
    maxIndex = 0;
    for(i = 1; i < 10; i++)
        if(countArr[i] > countArr[maxIndex])
            maxIndex = i;


    printf("The value appeared the most is : %d\n", maxIndex);
    printf("The number of appearances : %d\n", countArr[maxIndex]);

    return 0;
}