#include <stdio.h>

#define IS_UPPER(x) (x >= 'A' && x <= 'Z')
#define IS_LOWER(x) (x >= 'a' && x <= 'z')
#define SQUARE(x) (x * x)
#define CUBE(x) (x * x * x)

int main()
{
    int num = 0;

    printf("Enter any number to find square and cube: ");
    scanf("%d", &num);

    printf("SQUARE(%d) = %d\n", num, SQUARE(num));
    printf("CUBE(%d) = %d\n", num, CUBE(num));

    return 0;
}