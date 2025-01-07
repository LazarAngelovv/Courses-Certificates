#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Derivatives
//(c*x^n) = n * c * x ^ (n-1)

//c = 4, x = 2, n = 3
// 3 * 4 * 2 ^(2)  = 3 *4 * 4 = 48
int derivative(int c, int x, int n)
{
    int powerValue = pow(x, n -1);
    int result = c * n * powerValue;
    
    printf("%d", result);
}

int main()
{   
    derivative(4, 2, 3);

    return 0;
}