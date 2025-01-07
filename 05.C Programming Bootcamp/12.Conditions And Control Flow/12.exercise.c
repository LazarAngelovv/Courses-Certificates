#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter three-digit number: ");
    scanf("%d", &num);

    if((num/100) < ((num / 10) % 10 )&& ((num / 10) % 10) < (num % 10))
    {
        printf("ASCENDING");
    }
    else
    {
        printf("NOT ASCENDING.");
    }

    return 0;
}