#include <stdio.h>
#include <stdlib.h>

//isOdd functoion
//return 1 if the given number is "Odd"
//otherwise return 0
int isOdd(int num)
{
    if(num % 2 != 0)
        return 1;
    return 0;
}

int main()
{
    isOdd(3);
    return 0;
}