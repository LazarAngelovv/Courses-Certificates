#include <stdio.h>
#include <stdlib.h>

int main()
{   
    FILE *fp;
    char myChar1;
    fp = fopen("myFirstFile.txt", "w");

    if(fp != NULL)//file was opened succsesfuly 
    {
        fputc('H', fp);
        fputc('e', fp);
        fputc('y', fp);

        fclose(fp);
    }
    putchar('a', stdout); //putchar('a');
    
    return 0;
}