#include <stdio.h>
#include <stdlib.h>

//Fibonacci solution with recursion
int fibonacci(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci (n - 2);
}

int main()
{
    int num = 7;
    int result;

    
    result = fibonacci(num);

    printf("The result is %d", result);

    return 0;
}