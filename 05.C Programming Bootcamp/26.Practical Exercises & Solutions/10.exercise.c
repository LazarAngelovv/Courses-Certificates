#include <stdio.h>
#include <stdlib.h>

//Pell Number 
int pellNumberRecursive(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return 2 * pellNumberRecursive(n - 1) + pellNumberRecursive(n - 2);
}

int pellNumbersNonRecursive(int n)
{
    int i;
    int preprevious = 0;
    int previous = 1; 
    int current;
    
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    for(i = 2; i < 2; i++)
    {
        current  = 2 * previous + preprevious;
        preprevious = previous; 
        previous  = current;
    }
    return current;
}

int main()
{   
    int num;
    int result;
   
    printf("Enter a number: ");
    scanf("%d", &num);

    result = pellNumberRecursive(num);
    printf("Pell number is : %d", result);

    return 0;
}