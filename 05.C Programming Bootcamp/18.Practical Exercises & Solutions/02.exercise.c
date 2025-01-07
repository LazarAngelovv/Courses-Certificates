#include <stdio.h>
#include <stdlib.h>

//find max digit in the 2 digit number
void maxDigit(int num)
{
    if(num > 99 || num <10)
        printf("The number is not 2 digit number");
    else
    {
        if(num % 10 > num / 10) 
            printf("Maximum digit in %d is: %d\n", num, num % 10);
        else
            printf("Maximum digit in %d is: %d\n", num, num /10);
    }
}

int main()
{
    maxDigit(35);

    return 0;
}