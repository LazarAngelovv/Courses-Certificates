#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int main()
{
    int arr[SIZE] = {'k', 'i', 'b', 'r', 'c', 'k', 'z', 'm'};
    int countArr[26] = {0};
    int i;
    int maxIndex;

    for( i = 0; i < SIZE ; i++)
    {
        countArr[arr[i] - 'a']++;    
    }
    
    maxIndex = 0;
    for(i = 1; i < 26; i++)
        if(countArr[i] > countArr[maxIndex])
            maxIndex = i;


    printf("The value appeared the most is : %d\n", maxIndex);
    printf("The number of appearances : %d\n", countArr[maxIndex]);

    return 0;
}
