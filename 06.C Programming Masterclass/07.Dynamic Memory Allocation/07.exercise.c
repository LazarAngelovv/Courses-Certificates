#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Create myRealloc function
void* myRealloc(void *srcblock, unsigned oldsize, unsigned newsize)
{
    int smallSize;
    void* newArr = malloc(newsize);
    if(!newArr)
        return NULL;
    if(oldsize < newsize)
    {
        smallSize = oldsize;
    }
    else
    {
        smallSize = newsize;
    }
    memcpy(newArr, srcblock, smallSize);
}   

int main()
{
    int *numbers = malloc(sizeof(int) * 3);
    int *newNumbers = NULL;
    if(!numbers)
        return 1;
   
    numbers[0] = 3;
    numbers[1] = 5;
    numbers[2] = 4;
    newNumbers = myRealloc(numbers, sizeof(int) * 3, sizeof(int) * 4);

    return 0;
}