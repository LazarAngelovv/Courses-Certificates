#include <stdio.h>
#include <stdlib.h>

//Amount And Average Of Digits Less Than Given Digit
float lowerThanDigit(int num, int digit)
{
    int counter = 0;
    int totalSum = 0;

    if (num < 0)
        num = num * (-1);
    
    while(num != 0)
    {
        if(num % 10 < digit)
        {
            counter++;
            totalSum += num % 10;
        }
        num = num /10;
    }
    printf("Total Amount of Digits in %d = %d\n", num, counter);
    return (float)totalSum/counter;
}

int main()
{
    lowerThanDigit(0, 1);

   return 0;
}