#include <stdio.h>
#include <stdlib.h>

//Recursive function that recives chars from user until '$'
int totalCharacters(char character)
{
    char inputUser;
    
    printf("Please enter a character: ");
    scanf("%c", &inputUser);

    if(inputUser == '$')
        return 0;
    
    if(inputUser == character)
        return 1 + totalCharacters(character);
    return totalCharacters(character);
}

int main()
{
    char ch;
    totalCharacters(ch);

    return 0;
}
