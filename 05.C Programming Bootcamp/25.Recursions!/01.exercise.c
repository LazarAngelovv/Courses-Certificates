#include <stdio.h>
#include <stdlib.h>

//SumUpTo solution with recursion
int sumUpTo(int num) 
{
    if(num == 1)
        return 1;
    return num + sumUpTo(num - 1);
}

int main()
{
    int num;
    int result;

    printf("Enter your number: ");
    scanf("%d", &num);

    result = sumUpTo(num);
    printf("Result = %d\n", result);

    return 0;
}

//int main()                            solution without recursion
// {
//     int num;
//     printf("Enter number: ");
//     scanf("%d",&num);
//     int sum = 0;
//     int i;

//     for( i = 0; i <= num ;i++)
//     {
//         sum = sum + i;
//         printf("\nthis are the numbers %d\n", i);
//     }
//     printf("\nthis is the sum %d\n", sum);

//     return 0;
// }