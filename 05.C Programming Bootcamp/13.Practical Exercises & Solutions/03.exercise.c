#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if(num < 0)
        printf("The absolute value of %d is |%d| \n",num, (-1) * num);
    else
        printf("The absolute value of %d is |%d| \n", num, num);

    return 0;
}