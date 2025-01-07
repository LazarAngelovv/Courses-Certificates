#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int i;
    int result = 0;
    
    printf("Enter number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        result = result + i;
    }
    printf("%d", result);

    return 0;
}