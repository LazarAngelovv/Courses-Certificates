#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int j;
    int number;
    
    printf("Enter number for pattern of *: ");
    scanf("%d", &number);

    for(i = 1; i < number; i++)
    {
        for(j = 1; j < i; j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}