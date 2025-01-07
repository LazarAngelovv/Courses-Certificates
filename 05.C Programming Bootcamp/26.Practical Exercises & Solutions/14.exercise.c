#include <stdio.h>
#include <stdlib.h>

//Example #1:
//n = 36435
//position 0:5
//position 1:3
//position 2:4
//position 3:6
//position 4:3
int evenOddFunc(int n)
{
    if(n < 10)// one digit number -- > even position
        if(n % 2 == 0)// the value is even
            return 1;
        else
            return 0;
    
    if(n < 100)//2 digit number --> the right most digit(even pos) and left digit(odd pos)
        if(n % 10 % 2 == 0 && n / 10 % 2 == 1)
            return 1;
        else
            return 0;

    if((n % 10 % 2 == 0) && (n / 10 % 10 % 2 == 1))
        return evenOddFunc( n / 100);
    else
        return 0;
}
int main()
{
    int num;
    int result;
    printf("Enter number: ");
    scanf("%d", &num);
    
    result = evenOddFunc(num);
    printf("%d", result);

    return 0; 
}