#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
// function to find key in array
int findIfKeyInArray(int *arr, int size, int key)
{
    int i;
    for(i = 0; i < SIZE; i++)
    {
        if(arr[i] == key)
            return 1;
    }
    return 0;
}

int main()
{
    int grades[SIZE] = {80, 85, 72, 90};
    int result;
    result = findIfKeyInArray(grades,SIZE, 80);

    return 0;
}