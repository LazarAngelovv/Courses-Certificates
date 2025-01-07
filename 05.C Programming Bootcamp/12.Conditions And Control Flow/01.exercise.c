#include <stdio.h>
#include <stdlib.h>

int main()
{
    double grade;
    
    printf("Enter grade: ");
    scanf("%lf", &grade);

    if(grade >= 60)
    {
        printf("Congratulations");
    }
    else
    {
        printf("Failed.Try Again..");
    }

    return 0;
}