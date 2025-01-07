
#include <stdio.h>
#include <stdlib.h>

//Print number and their power
int main()
{   
    int num;
    int result;
    
    FILE *fp;

    fp = fopen("exerciseFile.txt", "w");

    if(fp != NULL)//file was opened succsesfuly 
    {
        for(int i = 1; i <= 10; i++)
            fprintf(fp, "%d %d\n",i, i * i);
        fclose(fp);
    }
 
    return 0;
}