#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1 = 80;
    int grade2 = 100;

    printf("Grades1 VALUE = %d\n",grade1);
    printf("Grade ADDRESS = %p\n",&grade1);

    printf("Grades2 VALUE = %d\n",grade2);
    printf("Grade ADDRESS = %p\n",&grade2);

    return 0;
}