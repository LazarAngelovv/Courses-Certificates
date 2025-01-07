#include <stdio.h>
#include <stdlib.h>
//Program to calculate character appearances in a file

int main()
{
    char desiredCharacter;
    char filename[20] = {0};
    int countAppearances = 0;
    FILE* fp;

    printf("Enter a desired character: ");
    scanf("%c", &desiredCharacter);

    printf("Enter a filename you want to test: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    
    if(fp != NULL)
    {
        while(!feof(fp))
            if(fgetc(fp) == desiredCharacter)
                countAppearances++;

    }
    printf("Total appearances of character %c: %d", desiredCharacter, countAppearances);

    return 0;
}