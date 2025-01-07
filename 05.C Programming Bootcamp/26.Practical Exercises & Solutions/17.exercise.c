#include <stdio.h>
#include <stdlib.h>
//Function that print sequence of lower chars and sequence of upper chars
void specialSequencePrint(int total, char val)
{
    if(total >= 1)
    {
        printf("%c", val);
        specialSequencePrint(total - 1, val);
        printf("%c", val - 'a' + 'A');
    } 
}

int main()
{
    specialSequencePrint(3, 'c');
    
    return 0;
}