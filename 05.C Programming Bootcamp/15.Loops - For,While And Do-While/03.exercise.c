#include <stdio.h>

int main()
{
    int number;
    int pow; 
    int i = 0;
    int result = 1;

    printf("Enter number: ");
    scanf("%d", &number);
    printf("Enter pow: ");
    scanf("%d", &pow);

    while(i < pow)
    {
        result = result * number;
        i++;
    }
    printf("%d",result);

    return 0;
}