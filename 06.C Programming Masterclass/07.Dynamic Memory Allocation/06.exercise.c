#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *temp = NULL;
    int *grades = NULL;
    int totalGrades;
    
    printf("Enter total grades: ");
    scanf("%d", &totalGrades);
    
    grades = malloc(sizeof(int) * totalGrades);
    
    if(grades = NULL)
    {
        printf("Allocation failed...\n");
        return 1;
    }
    for( i = 0 ; i < totalGrades ; i++)
    {
        printf("Enter grade:");
        scanf("%d", &grades[i]);
    } 
    
    totalGrades = totalGrades + 2;
    temp = realloc(grades, totalGrades * sizeof(int));
    
    if(temp != NULL)
        grades = temp;
    grades[totalGrades - 1] = 100;
    grades[totalGrades - 2] = 90;

    return 0;
}