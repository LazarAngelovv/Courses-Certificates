#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    int totalSum = 0; 
    int count;
    int gradesCount = 0; 

    printf("Enter Grade  or '-1' to exit the program: ");
    scanf("%d", &grade);

    while(grade != -1)
    {
        totalSum = totalSum + grade;
        gradesCount++;
        
        printf("Enter Grade  or '-1' to exit the program: ");
        scanf("%d", &grade);
    }

    printf("You have entered %d grades!\n",gradesCount);
    printf("And your AVARAGE GRADE is: %.2f\n",(float)totalSum / gradesCount);

    return 0;
}