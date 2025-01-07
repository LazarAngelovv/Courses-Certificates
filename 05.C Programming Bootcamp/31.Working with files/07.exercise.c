#include <stdio.h>
#include <stdlib.h>

//Number of characters in file
int main()
{   
    char myChar; 
    int countOfCharacters = 0;
    FILE *fp;

    fp = fopen("myFirstFile.txt", "w");

    if(fp != NULL)//file was opened succsesfuly 
    {
        while((myChar = fgetc(fp)) != EOF)
        {
            printf("%c", myChar); 
        }
        printf("The total of characters in the file is: %d\n", countOfCharacters);
        fclose(fp);
    }
 
    return 0;
}