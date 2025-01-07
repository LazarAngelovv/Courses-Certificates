#include <stdio.h>
#include <stdlib.h>

//is number Perfect
//Perfect number is num == divisorsSum  (28 = 1 + 2 + 4 + 7 + 14)
int isPerfect(int num)
{
    int i;
    int sum = 0;
    
    for(i = 1; i < num ; i++)
    {
        if(num % i == 0)
        {
            sum = sum + i;
            printf("%d ", i);
        }
    }
    
    if(num == sum)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}

int main()
{   
    sumOfDivisor(28);
    return 0;
}