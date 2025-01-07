#include <stdio.h>
#include <stdlib.h>

//num = 0;
//num = num*10 + 1 = 1
//num = num*10 + 2 = 12
//num = num*10 + 3 = 120 + 3
int nineNumber(int lenght);
long oneToNine(int lentght)
{
    int i;
    long num = 0;

    if(lentght <= 9)
    {
        for(i = 0; i < lentght; i++)
        {
            num = num * 10 + i;
        }
    }
    else
    {
        num = nineNumber(lentght);
    }
    return num;
}

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