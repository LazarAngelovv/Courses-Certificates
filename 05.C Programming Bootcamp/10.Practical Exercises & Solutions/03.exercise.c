#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salaryPerHour;
    int totalHoursWork;

    printf("Enter salary per hour: ");
    scanf("%f", &salaryPerHour);

    printf("Enter number of hours you work:");
    scanf("%d", &totalHoursWork);


    printf("%f", salaryPerHour * totalHoursWork);

    return 0;
}


