#include <stdio.h>
#include <stdlib.h>

enum months
{
    JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main()
{
    enum months month;

    int salaries[12] = { 10, 20, 30, 25 ,10, 20, 30, 25 ,10, 20, 30, 25};

    for(month = JAN; month <= DEC; month++)
    {
        printf("%2d%10d\n", month, salaries[month]);
    }
    
    return 0;
}