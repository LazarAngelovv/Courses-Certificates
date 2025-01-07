#include <stdio.h>
#include <stdlib.h>

struct BitFieldExample
{
    unsigned int field1: 1;
    unsigned int field2: 2;
    unsigned int field3: 3;
};
//Practical Code Example in C

int main()
{
    struct BitFieldExample structExample;
    structExample.field1 = 1;// can store values 0-1
    structExample.field2 = 2;// can store values 0-3
    structExample.field3 = 3;// can store values 0-7

    printf("field1: %u, field2: %u, field3: %u\n", structExample.field1, structExample.field2, structExample.field3);


    return 0; 
}