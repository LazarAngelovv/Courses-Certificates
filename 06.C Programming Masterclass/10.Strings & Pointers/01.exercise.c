#include <stdio.h>
#include <stdlib.h>

char *strConcat(char *originalStr)
{
    char *newStr;
    int lengthOriginal = strlen(originalStr);
    newStr = (char*)malloc(lengthOriginal * sizeof(char));
    
    for(i = 0; i < strlen; i++)
    {
        newStr[i] = originalStr[i];
        newStr[i + lengthOriginal] = originalStr[i];
    }
    newStr[i + lengthOriginal] = '\0';
}

int main()
{
    return 0;
}