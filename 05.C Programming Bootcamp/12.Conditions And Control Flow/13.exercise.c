#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num > 0)
    {
        printf("1");
    }
    if(num < 0)
    {
        printf("-1");
    }
    if(num == 0)
    {
        printf("0");
    }
    return 0; 
}

