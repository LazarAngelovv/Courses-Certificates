#include <stdio.h>
#include <stdlib.h>

//Recive number
//Even digit sum = 4 + 2= 6
//Odd digit sum = 3 + 5 = 8
//Print even digit sum - odd digit sum
int main()
{
    int currentDigit;
    int num;
    int evenSum = 0;
    int oddSum = 0;
   

    printf("Enter number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        currentDigit = num % 10;
        if(currentDigit % 2 == 0)
            evenSum += currentDigit;
        else
            oddSum += currentDigit;
        num = num / 10;
    }
    printf("Even Digit Sum - Odd Digit Sum = %d\n",evenSum - oddSum);

    return 0;
}