#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;

    printf("Enter 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c); 

    if(a == 0 || b == 0 || c == 0)
        printf("Cannot Divide by 0! Check your input once again \n");

    else if((a % b == 0 || b % c == 0) && (b % c == 0 || c % b == 0) && (a % c == 0 || c % a == 0))
        printf(" Divisible Numbers! \n");
        
    else
        printf("Not Divisible Numbers! \n");

    return 0;
}