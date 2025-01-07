#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number; 
    int i;

    printf("Enter integer: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++)
    {
        printf("%d ", i * 2);
    }
    
    return 0;
}