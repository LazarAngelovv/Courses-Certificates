#include <stdio.h>
#include <stdlib.h>

//Function that prints sequence of nums and sequence of nums 2
int specialSequencePrint(int total, int num1, int num2)
{
    if(total >= 1)
    {
        printf("%d", num1);
        specialSequencePrint(total - 1, num1 , num2);
        printf("%d", num2);
    }
}

int main()
{
    specialSequencePrint(3, 2, 4);
    return 0;
}