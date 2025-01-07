#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//using memcpy
// The memcpy function in C is used to copy data from a memory location to another memory location. 
// The function uses pointers to represent the address in which the data are stored. 
// The memcpy function returns a pointer that stores the address of the destination after the copy has been performed.
void genericSwap(void* a, void* b, int size)
{
    //size - specifies the number of bytes
    void* tempMemory = malloc(size);
    
    //Memory Copy Function
    //Void *memcpy(void *dest, const void *src,size_t num)

    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);
    
    free(tempMemory);
}

int main()
{
    int num1 = 5;
    int num2 = 7;

    double average1 = 90.5;
    double average2 = 89.7;

    genericSwap(&average1, &average2, sizeof(double));
    genericSwap(&num1,&num2,sizeof(int));

    return 0;
}