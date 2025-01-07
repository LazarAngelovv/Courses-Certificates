#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;

};

struct date
{
    int day;
    int month;
    int year; 
};

int main()
{
    struct date graduateDate;
    printf("Enter day : ");
    scanf("%d", &graduateDate.day);
    
    printf("Enter month : ");
    scanf("%d", &graduateDate.month);
    
    printf("Enter month : ");
    scanf("%d", &graduateDate.year);

    printf("The graduate DATE is %d/ %d /%d \n", graduateDate.day, graduateDate.month, graduateDate.year);

    return 0; 
}