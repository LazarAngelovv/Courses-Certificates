#include <stdio.h>
#include <stdlib.h>

//swap function 
int swap(int *ptr1, int*ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    swap(&a,& b);
    printf("%d, %d",a, b);

    return 0;
}