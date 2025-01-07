#include <stdio.h>
#include <stdlib.h>

//print string
int main()
{   
    char fullName[] = "Lazar Angelov";
    int i = 0;
    
    while(fullName[i] != '\0')
    {
        printf("%c", fullName[i]);
        i++;
    }
    
    return 0;
}