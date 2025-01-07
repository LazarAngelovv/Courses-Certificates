#include  <stdio.h>
#include <stdlib.h>

//Sum of digits
//example 67 = 6 + 7 = 13
int sumOfDigits(int num)
{
    if(num <= 9)
        return num;
    return num % 10 + sumOfDigits(num /10);
}

int main()
{
    int num = 67;
    int result;
    result = sumOfDigits(num);

    printf("%d", result);
    return 0;
}