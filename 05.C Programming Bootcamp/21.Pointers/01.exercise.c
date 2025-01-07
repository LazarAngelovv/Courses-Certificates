#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =5;
    int *p;

    printf("%d\n",a);
    printf("%p\n", &a);
    printf("%p\n", p);
    printf("%d", *p);
   
    return 0;
}