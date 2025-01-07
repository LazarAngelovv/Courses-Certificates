#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define SIZE 6
int isFreqAsValue(int* srcArr,int size, int k)
{
    int* countArr;
    int i;

    countArr = calloc((k + 1), sizeof(int));
    assert(countArr);
    //Building the Counting Array
    for(i = 0; i < size; i++)
        countArr[srcArr[i]]++;
    
    //Look for" index != countArr[index]"
    for(i = 0; i <= k; i++)
        if(i != countArr[i])
        {
            free(countArr);
            return 0;
        }
    //All elements satisfy the "freqAsValue" cond.
    free(countArr);
    return 1;
}

int main()
{
    int arr[SIZE] = {1, 2, 2, 1, 4, 3};
    int k = 4;
    int result = isFreqAsValue(arr, SIZE, k);
    int i;

    printf("Freq of number #%d is # %d",k, result);
    printf("%d", result);

    for(i = 0 ; i < SIZE; i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}