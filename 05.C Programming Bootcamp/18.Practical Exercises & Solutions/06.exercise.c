#include <stdio.h>
#include <stdlib.h>

//Function recive number
//999...9
//Examples:
//  - lentght = 3 -->999
//  - lentght = 5 -->99999
int nineNumber(int lenght)
{
    int i;
    int num = 0;

    for(i = 0; i < lenght; i++)
    {
        num = num * 10 + 9;
    }
    return num;
}

int main()
{
    int lengthSeq;
    int result;
    printf("Hey there! Please enter a length for the n-th sequence: ");
    scanf(" %d", &lengthSeq);

    result = nineNumber(lengthSeq);

    printf("Result = %d\n",result);

    return 0;
}