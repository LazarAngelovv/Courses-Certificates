#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Find how many words there are in a string
//Hey! My name is Vlad!
int main()
{   
    char sentence[30];
    int countWords = 0;
    int i;

    printf("Please enter a string/text: ");
    gets(sentence);

    for(i = 0; i < strlen(sentence); i++)
    {
        if(sentence[i] == ' ')
            countWords++;
    }
    countWords++;

    printf("Total amount of words in %s = %d\n", sentence, countWords);

    return 0;
}