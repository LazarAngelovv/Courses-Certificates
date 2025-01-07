#include <stdio.h>
#include <stdlib.h>

//Function that prints sequence of chars and then sequence of chars again 
void specialSequencePrint(int total, char num1, char num2)
{
    if(total >= 1)
    {
        printf("%c", num1);
        specialSequencePrint(total - 1, num1 , num2);
        printf("%c", num2);
    }
}

int main()
{
    specialSequencePrint(3, 'a', 'b');
    
    return 0;
}