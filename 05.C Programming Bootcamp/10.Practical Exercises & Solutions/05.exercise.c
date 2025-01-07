#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secounds;
    printf("Enter secounds: ");
    scanf("%d", &secounds);

    int hours = secounds / 3600;
    int minutes = (secounds - hours * 3600) / 60;
    int remainingSecounds = (secounds - hours * 3600) % 60; 

    printf("Hours %d\n", hours);
    printf("Minutes %d\n", minutes);
    printf("Secounds %d\n", remainingSecounds);
    
    return 0;
}