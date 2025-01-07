#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int units;
    int tens;
    int hundreds; 
    int reversedNum;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    units = num % 10;
    tens = (num / 10) % 10;
    hundreds = num /100;

    reversedNum = units;
    reversedNum = reversedNum * 10 + tens;
    reversedNum = reversedNum * 10 + hundreds;


    printf("Reversed Number: %d%d%d\n", units,tens,hundreds);
    printf("Reversed Number of %d is %d\n", num, reversedNum);

    return 0;
}