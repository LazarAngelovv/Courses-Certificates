#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    
    if(num >= 10 && num <= 99)
    {
        printf("This number is 'double-digit' number \n");
    }
    else if(num >= 100 && num <= 999)
    {
        printf("This number is 'triple-digit' number\n");
    }
    else
    {
        printf("Enter 'two digit' or 'triple digit' number");
    }
    
    return 0;
}
