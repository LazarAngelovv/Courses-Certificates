#include <stdio.h>
#include <stdlib.h>

//strlen
//function that recives a string
//finds our and return the length of the string
int strlen(char *str)
{
    int i;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    return 0;
}