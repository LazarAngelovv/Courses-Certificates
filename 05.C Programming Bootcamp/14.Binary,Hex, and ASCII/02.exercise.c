#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myCharacter;
    scanf("%c", &myCharacter);

    if(myCharacter >= 'A' &&  myCharacter <= 'Z')
        printf("It's a uppercase!\n");
    
    else if(myCharacter>= 'a' && myCharacter <='z')
        printf("It's lower case");

    else if(myCharacter >= '0' && myCharacter <= '9')
        printf("It's a digit!\n");
    else
        printf("Other...!\n");
        
    return 0;
}