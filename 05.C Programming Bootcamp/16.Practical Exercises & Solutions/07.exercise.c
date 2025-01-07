#include <stdio.h>
#include <stdlib.h>

//Summing up all the numbers from "1" up to "num"
//that can be divided by "3" or"5" 
int main()
{
    int num;
    int i;
    int sum = 0;
//Trivial Solution
    printf("Enter num: ");
    scanf("%d", &num);
    
    for(i = 1; i < num; i ++)
    {
        if( i % 3 == 0 || i % 5 == 0)
        printf("%d can be divide by  3 OR 5\n",i);
    }
//Optimized Solution 

    for( i = 3; i <= num; i = i +3)
        sum = sum + i;

    for( i = 5; i <= num; i = i + 5)
    {
        if(i % 3 != 0)
            sum = sum + i;
    }   
    
    printf("Sum = %d\n", sum);

    return 0; 
}