#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade1 = 80;
    int grade2 = 200;
    
    printf("Grade1 VALUE = %d\n", grade1);
    printf("Grade1 ADRESS = %p\n", &grade1);
    
    printf("Grade2 VALUE = %d\n", grade2);
    printf("Grade2 ADRESS = %p\n", &grade2);

    return 0;
}