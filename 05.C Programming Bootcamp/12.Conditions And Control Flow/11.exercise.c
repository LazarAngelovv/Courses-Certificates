#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Enter num 1: ");
    scanf("%d", &num1);
    
    printf("Enter num 2: ");
    scanf("%d", &num2);

    printf("Enter num 3: ");
    scanf("%d", &num3);


    if(num1 == num2 && num1 == num3)
    {
        printf("EQUAL");
    }
    else
    {
        printf("NOT EQUAL");
    }

    return 0;
}