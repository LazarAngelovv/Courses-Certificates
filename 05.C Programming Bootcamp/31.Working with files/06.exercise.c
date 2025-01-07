#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char myString[10];
    int count = 0;
    FILE *fp;

    fp = fopen("myFirstFile.txt", "w");

    if(fp != NULL)//file was opened succsesfuly 
    {
        while(fgets(myString, 10, fp))
            printf("string #%d read: %s\n", ++count, myString);

        fclose(fp);
    }
 
    return 0;
}