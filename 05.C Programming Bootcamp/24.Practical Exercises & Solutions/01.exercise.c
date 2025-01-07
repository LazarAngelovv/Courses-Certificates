#include <stdio.h>
#include <stdlib.h>

//strlen function implementation
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