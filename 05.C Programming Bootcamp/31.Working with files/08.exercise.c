#include <stdio.h>
#include <stdlib.h>

//Number of lines in file
int main()
{   
    char myChar; 
    int totalLines = 1;
    FILE *fp;

    fp = fopen("myFirstFile.txt", "w");

    if(fp != NULL)//file was opened succsesfuly 
    {
        while((myChar = fgetc(fp)) != EOF)
        {
            if(myChar == '\n')
                totalLines++;
        }
        printf("The total of numbers  in the file is: %d\n", totalLines);
        fclose(fp);
    }
 
    return 0;
}