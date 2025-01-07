#include <stdio.h>
#include <stdlib.h>

enum workingDays
{
    MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY
};

int main()
{
    enum workingDays day;
    int userDay;

    printf("Please enter the day you worked (0-4): ");
    scanf("%d", &userDay);

    if (userDay == MONDAY)
    {
        printf("Monday...Do this and Do that..\n");
    }
    else if (userDay == TUESDAY)
    {
        printf("Do something related to Tuesday..\n");
    }
    // Add other days' conditions here

    return 0;
}