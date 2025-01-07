#include <stdio.h>
#include <stdlib.h>

//to Lower function in c representation
//to Upper function in c represnetation
char toLower(char letter)
{
    if(letter  >= 'A' && letter <= 'Z')
        return letter - 'A' + 'a';
    else return -1;
}

char toUpper(char letter)
{
    if(letter  >= 'a' && letter <= 'z')
        return letter - 'a' + 'A';
    else return -1;
}


int main()
{
    return 0;
}