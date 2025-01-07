#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int pow;
    int result = 1;

    printf("Enter Number: ");
    scanf("%d",&number);
    
    printf("Enter Power: ");
    scanf("%d", &pow);

    for(int i = 0; i < pow ; i++)
    {
        result = result * number;
    }
    printf("The result is: %d", result);

    return 0; 
}