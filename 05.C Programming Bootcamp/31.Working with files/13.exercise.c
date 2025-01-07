#include <stdio.h>
#include <stdlib.h>

//Program to calculate character appearances in a file
int main()
{
    char filename[20] = {0};
    char currentCharacter;
    int i;
    int maxIndex = 0;
    int frequenceArray[26] = { 0 };
    FILE* fp;

    printf("Enter a filename you want to test: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    
    if(fp != NULL)
    {
        while(!feof(fp))
        {
            currentCharacter = fgetc(fp);
            if(currentCharacter >= 'a' && currentCharacter <= 'z')
                frequenceArray[currentCharacter - 'a']++;
        }
    }
    printf("Total Appearances of lowercase letters in file name %s", filename);
    for(i = 0; i < 26; i++)
    {
        if(frequenceArray[maxIndex] < frequenceArray[i])
            maxIndex = i;
    }
    printf("The  maximum appearances of a lowercase is of character: %c \n", maxIndex + 'a');
    
    return 0;
}