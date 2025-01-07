#include <stdio.h>
#include <stdlib.h>

#define SIZE 5
int main ()
{
    int arr[SIZE] = { 1, 4, 7, 2, 5};
    int firstEnd = 2, secondEnd = SIZE -1;
    int i = 0;
    int j = firstEnd + 1;
    int k = 0;
    int temp[SIZE];

    while((i <= firstEnd) && (j <= secondEnd))
    {
        if(arr[i] < arr[j])
            temp[k++] = arr[i++];
        else    
            temp[k++] = arr[j++];
    }
    while(i <= firstEnd)
        temp[k++] = arr[i++];
    while(j <= secondEnd)
        temp[k++] = arr[j++];

    return 0;
}