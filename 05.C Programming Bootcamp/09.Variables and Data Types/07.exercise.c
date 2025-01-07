#include <stdio.h>
#include <stdlib.h>

int main()
{
    double ctemp;
    double ftemp;

    printf("Enter fahrenheit temperature: ");
    scanf("%lf", &ftemp);

    ctemp = (ftemp - 32) / 1.8;
    printf("%lf Celsius temperature is %lf Fahrenheit temperature.",ctemp,ftemp);

    return 0;
}

