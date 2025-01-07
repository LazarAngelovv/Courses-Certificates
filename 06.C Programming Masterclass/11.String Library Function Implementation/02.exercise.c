#include <stdio.h>
#include <stdlib.h>

char* strcat(char* destStr, char* sourceStr)
{   
    char *concatStr;
    int lengthDest, lengthSource;
    lengthDest = strlen(destStr);
    lengthSource = strlen(lengthDest + lengthSource + 1);
    concatStr = malloc(lengthDest + lengthSource + 1);

    for(i = 0; i < lengthDest; i++)
    {
        concatStr[i] = destStr[i];
    }
    for(i = 0; i < lengthSource; i++)
    {
        concatStr[i + lengthDest] = sourceStr[i]
    }
    concatStr[lengthDest + lengthSource] = '\0';

    return *concatStr;
}

int main()
{
    return 0;
}