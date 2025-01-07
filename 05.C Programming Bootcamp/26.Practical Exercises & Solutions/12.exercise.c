#include <stdio.h>
#include <stdlib.h>

//Recursive function that gets integer and return 1 if the sum of all numbers in the recive values is even
//Otherwise return 0
//OPTIMIZED AND MINIMIZED
int digitsSumEven(int n)
{
    if(n < 10)
        return n % 2 ? 0 : 1;
    return n % 10 % 2 ? !digitsSumEven(n/10) : digitsSumEven(n/10);
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