#include <stdio.h>
#include <stdlib.h>

//n-th term of an Arithmetic Sequence
//an = a1 + (n-1) *d

int main()
{
    float a1;
    float d;
    int n;

    printf("Enter the Initial Term (a1): ");
    scanf("%f", &a1);

    printf("Enter the difference in the Arithmetic Sequence: ");
    scanf("%f", &d);
    
    printf("Enter the number of elements in the arithmetic sequence: ");
    scanf("%d", &n);

    printf("The n-th term of the arithmetic sequence = %f\n", a1 + (n-1) * d);
    
    return 0;
}