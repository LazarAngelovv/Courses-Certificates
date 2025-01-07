#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int i;
    
    printf("Enter number: ");
    scanf("%d",&number);
    
    for(i = 1; i <= number; i++)
    {
        printf("%d ", i);
    }
    for(i = number; i >= 1; i--)
    {
        printf("%d ", i);
    }

    return 0;
}