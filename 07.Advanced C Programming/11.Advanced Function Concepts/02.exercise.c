#include <stdio.h>
#include <stdlib.h>

int findGCD();

int main()
{
    int num1 = 0, num2 = 0, gcd = 0;
    printf("\n\nRecursion: Find GCD of two numbers:  \n");
    printf("---------------------------------------");

    printf("Input 1st number: ");
    scanf("%d", &num1);

    printf("Input 2nd number: ");
    scanf("%d", &num2);

    gcd = findGCD(num1, num2);

    printf("\n The GCD of %d and %d is: %d\n\n",num1 ,num2 ,gcd);

    return 0;
}

int findGCD(int a, int b)
{
    while(a != b)
    {
        if(a > b)
            return findGCD(a - b, b);
        else
            return findGCD(a, b - a);
    }
}
