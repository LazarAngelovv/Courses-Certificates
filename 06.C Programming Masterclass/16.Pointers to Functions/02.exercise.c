#include <stdio.h>
#include <stdlib.h>

//Example without function pointers
void addition(int a, int b)
{
    printf("%d + %d = %d \n", a, b ,a + b);
}
void substraction(int a, int b)
{
    printf("%d - %d = %d \n", a, b ,a - b);
}
void multiplication(int a, int b)
{
    printf("%d + %d = %d \n", a, b ,a * b);
}
void division(int a, int b)
{
    printf("%d + %d = %d \n", a, b ,a / b);
}

int main()
{
    int num1;
    int num2;
    char op;
    printf("Enter the opertion you want to perform: ", op);
    scanf("%c", &op);

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    switch (op)
    {
        case '+':
            addition(num1,num2);
            break;
        case '-':
            substraction(num1,num2);
            break;
        case '*':
            multiplication(num1,num2);
            break;
        case '/':
            division(num1,num2);
        default:
        printf("No relevatn operation... Try again...");
    }
    
    return 0;
}