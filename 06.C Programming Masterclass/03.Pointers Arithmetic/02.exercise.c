#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("size = %d \n", sizeof(double));

    printf("size = %d\n", sizeof(char));
    
    printf("size = %d\n", sizeof(int));

    printf("size = %d\n", sizeof(float));

    printf("size = %d\n", sizeof('a'));

    printf("size = %d\n", sizeof("a"));

    return 0;
}