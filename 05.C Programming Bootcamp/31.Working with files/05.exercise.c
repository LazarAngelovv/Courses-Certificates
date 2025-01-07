#include <stdio.h>
#include <stdlib.h>

int main()
{   
    FILE* fp;

    puts("Hey man");
    puts("This is Lazar from Datecs");
    
    fp = fopen("myFirstFile4.txt", "w");

    if(fp != NULL)//file was opened succsesfuly 
    {
        fputs("Hey man", fp);
        fputs("This is Lazar from Datecs", fp);
        fclose(fp);
    }

    return 0;
}