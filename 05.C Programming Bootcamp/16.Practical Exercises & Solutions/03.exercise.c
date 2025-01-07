#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number; 
    int multiplicator;
    int i;
   
    printf("Enter integer: ");
    scanf("%d", &number);

    printf("Enter multiplicator: ");
    scanf("%d", &multiplicator);

    for(i = 0; i <= multiplicator; i++)
    {
        printf("Number %d * %d = %d\n",number, i, i * number); 
    }
    
    return 0;
}