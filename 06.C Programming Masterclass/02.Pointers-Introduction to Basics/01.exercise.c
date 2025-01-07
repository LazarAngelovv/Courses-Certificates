#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 5;
    int *p;

    p = &a;
    //Addres of "a"
    printf("%p\n", &a);
    printf("%p\n", p);
    //Value of "a"
    printf("%d\n", a);
    printf("%d\n", *p);

    return 0;
}