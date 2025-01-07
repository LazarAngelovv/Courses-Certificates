#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if(year % 400 == 0)
        printf(" %d year is leap year\n", year);
    
    else if(year % 100 == 0)
        printf(" Year is not leap year\n", year);
    
    else if(year % 4 == 0)
        printf("%d year is a leap year\n", year);

    return 0;
}