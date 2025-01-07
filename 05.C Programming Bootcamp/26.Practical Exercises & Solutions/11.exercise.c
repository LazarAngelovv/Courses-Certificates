#include <stdio.h>
#include <stdlib.h>

//Recursive function that gets integer and return 1 if the sum of all numbers in the recive values is even
//Otherwise return 0
// 156 = 1 + 5 + 6 = 12  = 1
//36859 = 3 + 6 + 8 5 + 9 = 31 = 0
int digitsSumEven(int n)
{
    int resultSoFar;
    if(n < 10)
    {
        if(n % 2 == 0)
            return 1;
        else
            return 0;
    }
    
    resultSoFar = digitsSumEven(n/10);
    
    if (n % 10 % 2 == 0)
    {
        if(resultSoFar == 1)
            return 1;
        else
            return 0;
    }
    else
    {
        if(resultSoFar == 1)
            return 0;
        else
            return 1;
    }
}

int main()
{
    int num;
    int result; 
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    result = digitsSumEven(num);
    printf("%d", result);

    return 0;
}