#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr1;
    int grade = 80;
    
    ptr1 = &grade;
    
    printf("%d", sizeof(ptr1));

    double *ptr2;
    double grade2 = 75.5;
    
    ptr2 = &grade;
    printf("%d",sizeof(ptr2));

    return 0;
}