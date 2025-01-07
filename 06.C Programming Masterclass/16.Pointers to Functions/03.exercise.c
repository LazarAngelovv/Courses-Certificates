#include <stdio.h>
#include <stdlib.h>

//Example with function pointers
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
    void(*funPtrArray[])(int,int) = {addition, substraction, multiplication, division};
    int num1;
    int num2;
    int choice;
    
    printf("Choose: \n0  - addition \n1 - substraction \n2 - multiplication \n3 - division\n4 ", choice);
    scanf("%c", &choice);

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    (*funPtrArray[choice])(num1,num2);

    return 0;
}