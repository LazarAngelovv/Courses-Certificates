#include <stdio.h>
#include <stdlib.h>

//factorial solution with recursion
int factorial(int num) 
{
    if(num <= 1)
        return 1;
    return num * factorial(num - 1);
}

int main()
{
    int num;
    int result;

    printf("Enter your number: ");
    scanf("%d", &num);

    result = factorial(num);
    printf("Result = %d\n", result);

    return 0;
}
