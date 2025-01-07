#include <stdio.h>
#include <stdlib.h>

int charecterToInteger(char character1, char character2,char character3)
{
    int hundreds;
    int tens;
    int units;
    int finalResult;

    if(character1 >= '0' && character1 <= '9')
        hundreds = character1 - '0'; 
    else
        return 0;

    if(character2 >= '0' && character2 <= '9')
        tens = character2 - ' 0';
    else
        return 0;
    
    if(character3 >='0' && character3 <= '9')
        units = character3 -'0'
    else
        return 0;
    
    return hundreds * 100 + tens * 10 + units;
}
int main()
{
    return 0;
}