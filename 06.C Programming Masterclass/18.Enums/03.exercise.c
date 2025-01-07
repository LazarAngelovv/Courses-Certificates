#include <stdio.h>
#include <stdlib.h>

enum months
{
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

enum monthsBonus
{
    JAN = 10, FEB = 20, MAR = 35
}bonus;

enum workingDays
{
    MONDAY = 10, TUESDAY = 10, WEDNESDAY = 10, THURSDAY, FRIDAY
};

int main()
{
    enum workingDays day;
    for(day = MONDAY; day <= FRIDAY; day++)
    {
        printf("%d",day);
    }
}

// int main()
// {
//     enum months month;

//     char* monthNmaes[] = { "JAN", "FEB" , "MAR", "APR", "MAY", "JUN", "JUL" , "AUG", "OCT", "NOV" , "DEC"};

//     int salaries[12] = { 10, 20, 30, 25 ,10, 20, 30, 25 ,10, 20, 30, 25};

//     for(month = JAN; month <= DEC; month++)
//     {
//         printf("%2s%10d\n", monthNmaes[month], salaries[month]);
//     }
    
//     return 0;
// }