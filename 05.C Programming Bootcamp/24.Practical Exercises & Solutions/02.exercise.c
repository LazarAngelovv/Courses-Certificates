#include <stdio.h>
#include <stdlib.h>

//implementation of strcpy
char *strcpy(char *copyOfStr, char *str)
{
    char *tempPtr;
    int i = 0; 
    tempPtr = copyOfStr;

    while(str[i] != '\0')
    {
        copyOfStr[i] = str[i];
        i++; 
    }
    copyOfStr[i] = '\0';

    return tempPtr;
}

int main()
{
    char myNickName[] = "Datecs";
    char copyOfNickName[30];
    char *tempResult;
    tempResult = strcpy(copyOfNickName, myNickName);

    printf("The new copied string is: %s \n", tempResult);
    printf("The new copied string is: %s \n",copyOfNickName);

    return 0;
}