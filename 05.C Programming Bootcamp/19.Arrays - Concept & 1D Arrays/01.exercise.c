#include <stdio.h>
#include <stdlib.h>

//Fill Array and print the lower grade
int main()
{
    int grades[5];
    int i;
    int lowest_grade;

    for(i = 0; i < 5; i++)
    {
        printf("Enter grade no.%d: ", i + 1);
        scanf("%d", &grades[i]);
    }

    lowest_grade = grades[0];

    for(i = 1; i < 5; i++)
    {
        if(grades[i] < lowest_grade)
            lowest_grade = grades[i];
    }
    printf("Your lower grade is: %d\n", lowest_grade);

    return 0;
}