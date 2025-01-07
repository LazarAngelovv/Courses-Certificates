
#include <stdio.h>
#include <stdlib.h>

//isEven function
//return 1 if the given number is "Even"
//otherwise return 0
int isEven(int num)
{
    if(num % 2 == 0)
        return 1;
    return 0;
}

int main()
{
    isEven(2);

    return 0;
}