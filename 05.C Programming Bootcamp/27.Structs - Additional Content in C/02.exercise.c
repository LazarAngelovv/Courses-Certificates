#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int day ;
    int month ;
    int year;
}Date;

void printDate(Date dt)
{
    printf("Year = %d, Month = %d, Day  = %d\n",dt.year, dt.month, dt.day);
}

Date inputDate()
{
    Date dt;
    printf("Enter day(1 - 31): ");
    scanf("%d", &dt.day);
    
    printf("Enter day(1 - 31): ");
    scanf("%d", &dt.month);
    
    printf("Enter day(1 - 31): ");
    scanf("%d", &dt.year);
    
    return dt;
}

int main()
{
    Date graduationDate;
    graduationDate = inputDate();
    printDate(graduationDate);
    
    return 0;
}