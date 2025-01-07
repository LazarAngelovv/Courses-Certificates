#include <stdio.h>
#include <stdlib.h>

//Factorial function 
//if num (5) the result 1 * 2 * 3 * 4 * 5
int factorial(int num)
{   
    int result = 1;
    
    if(num < 0)
        return -1;//if number < 0 exit 
        
    for(int i = 1; i <= num ; i++)
    {
        result = result * i;
    }
    printf("%d", result);
}

int main()
{
    factorial(5);
    
    return 0;
}