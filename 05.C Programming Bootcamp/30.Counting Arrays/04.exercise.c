#include <stdio.h>
#include <stdlib.h>

#define SIZE 8
int main()
{
    int arr[SIZE] = {'K', 'I', 'B', 'R', 'C', 'K', 'Z', 'M'};
    int countArr[52] = {0};
    int i;
    int maxIndex;

    for( i = 0; i < SIZE ; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
            countArr[arr[i] - 'a']++; 
        else if(arr[i] >= 'A' && arr[i] <= 'Z')
            countArr[arr[i] - 'A' + 26]++;  
    }
    
    maxIndex = 0;
    for(i = 1; i < 52; i++)
        if(countArr[i] > countArr[maxIndex])
            maxIndex = i;

    if(maxIndex < 26)
        printf("The value appeared the most is : %d\n", maxIndex);
        printf("The number of appearances : %d\n", countArr[maxIndex]);
    
    else
        printf("The value appeared the most is : %d\n", maxIndex);
        printf("The number of appearances : %d\n", countArr[maxIndex]);

    return 0;
}
