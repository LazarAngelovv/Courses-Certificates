#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char a[10] = "3.14";
    float value = atof(a);

    printf("Value = %f\n", value);

    return 0;
}