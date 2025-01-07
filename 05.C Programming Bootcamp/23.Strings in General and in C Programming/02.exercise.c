#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Function that takes string and returns length

#define SIZE 10

char strLen(char *str)
{
   int i = 0;
   int length = 0;
   while(str[i] != '\0')
   {
        i++;
        length++;
   }
   return length;
}

int main()
{
    int stringLength;
    char testStr[SIZE];
    
    gets(testStr);
    stringLength = strlen(testStr);
    
    printf("The lenght of string '%s'is %d\n", testStr, stringLength);
    
    return 0;
}


    