#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numberOfRepeat;
    
    printf("Enter how many time you want to REPEAT: ");
    scanf("%d",&numberOfRepeat);

    for(int i = 0; i < numberOfRepeat; i++)
    {
        printf("Sorry i will practice more next time.\n");
    }
    return 0;
}