#include <stdio.h>

union student
{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
};

int main()
{
    union student student1;
    student1.letterGrade = 'B';
    student1.roundedGrade = 87;
    student1.exactGrade = 86.7;

    printf("%c\n", &student1.letterGrade);
    printf("%d\n", &student1.roundedGrade);
    printf("%f\n", &student1.exactGrade);

    union student student2;
    student2.letterGrade = 'A';
    student2.roundedGrade = 100;
    student2.exactGrade = 99.7;

    printf("%c\n", &student2.letterGrade);
    printf("%d\n", &student2.roundedGrade);
    printf("%f\n", &student2.exactGrade);

    return 0;
}