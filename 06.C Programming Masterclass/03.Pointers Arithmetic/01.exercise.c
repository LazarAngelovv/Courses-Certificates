#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade = 80;
    
    printf(" size of variable = %d\n", sizeof(grade));

    double grade = 79.9;
    
    printf("size of variable = %d\n",sizeof(grade));
    
    int grade1 = 80;
    int grade2 = 90;
    
    printf("size of variable = %d\n", sizeof(grade1 + grade2));
    
    int grade1 = 80;
    int grade2 = 90;
    
    printf("size of variable = %d\n", sizeof(grade1) + (grade2));

    return 0;
}