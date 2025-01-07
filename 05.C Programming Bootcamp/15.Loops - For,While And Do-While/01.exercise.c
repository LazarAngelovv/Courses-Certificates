#include <stdio.h>

int main()
{
    int count;
    
    printf("Enter a number: ");
    scanf("%d", &count);

    while (count <= 10 )
    {
        printf("*");
        count++; 
    }
    
    return 0;
}