#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int x = 5;
    int y = 10;

    int* const ptr = &x;  // const pointer to non-const value
    *ptr = 7;  // Allowed: modifies x through ptr
    ptr = &y;  // Not allowed: can't reassign const pointer to a different address

    const int* const constPtr = &x;  // const pointer to const value
    *constPtr = 7;  // Not allowed: can't modify const value through constPtr
    constPtr = &y;  // Not allowed: can't reassign const pointer to a different address

    return 0;
}