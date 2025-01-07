#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    printf("Enter Grade: ");
    scanf("%d", &grade);

    if(grade >= 80)
    {
        printf("Exelent Job");
    }
    else if(grade >= 60 )
    {
        printf("Not bad... \n");
    }
    else if(grade < 60)
    {
        printf("Oh...You didn't pass..\n");
    }

    return 0;
}