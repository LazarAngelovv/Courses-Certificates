#include <stdio.h>
#include <stdlib.h>

//print numbers from 0 to n recursion
int printNumbers(int num)
{
    if(num >= 1)
    {
        printNumbers(num-1);
        printf("All the values from one to %d\n", num);
    }
}

int main()
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printNumbers(num);

    return 0;
}