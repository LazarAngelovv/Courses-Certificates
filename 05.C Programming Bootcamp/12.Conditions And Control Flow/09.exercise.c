#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1;
    int num2;
    char mathoperation;

    printf("Enter math operation you would like to use ('+', '-', '*', '/'): ");
    scanf("%c", &mathoperation);
    printf("Enter num 1 and num 2:");
    scanf("%d %d", &num1, &num2);
    
    switch (mathoperation)
    {
    case '+':
        printf("The result is: %d %c %d = %d\n", num1, mathoperation, num2, num1 + num2);
        break;
    case '-':
        printf("The result is: %d %c %d = %d\n", num1, mathoperation, num2, num1 - num2);
        break;
    case '*':
        printf("The result is: %d %c %d = %d\n", num1, mathoperation, num2, num1 * num2);
        break;
    case '/':
        if(num2 == 0);
        printf("You cannot divide by 0! \n");
        printf("The result is: %d %c %d = %d\n", num1, mathoperation, num2, num1 / num2);
        break;
    default:
        printf("Wrong mathematical operation.. Try again.\n");
        break;
    }

    return 0;
}