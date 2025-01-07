#include <stdio.h>
#include <stdlib.h>

int main()
{

    int day;
    int month;
    int year;

    printf("Enter day: ");
    scanf("%d", &day);

    printf("Enter month: ");
    scanf("%d" &month);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Day: 0x%x\n", day);
    printf("Month: 0x%x\n", month);
    printf("Year: 0x%x\n",year);

    return 0;
}