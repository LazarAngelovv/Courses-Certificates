#include <stdio.h>
#include <stdlib.h>

// Sum of divisors
//num(6)  sumOfDiviors: 1 + 2 + 3 + 6 = 12;
int sumOfDivisor(int num)
{
    int i;
    int sum = 0;
    
    for(i = 1; i <= num ; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
            printf("%d ", i);
        }
    }
    printf("\nSum of divisors is: %d", sum);
}

int main()
{   
    sumOfDivisor(15);
    return 0;
}