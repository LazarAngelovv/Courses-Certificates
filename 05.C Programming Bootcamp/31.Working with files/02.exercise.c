#include <stdio.h>
#include <stdlib.h>

int main()
{   
    FILE *fp;
    char myChar1;
    fp = fopen("myFirstFile.txt", "r");

    if(fp != NULL)//file was opened succsesfuly 
    {
        printf("The file is Opend for Reading!\n");
        myChar1 = fgetc(fp);
        printf("The first character that was read is  : %c", myChar1);
       
        myChar1 = fgetc(fp);
        printf("The second character that was read is  : %c", myChar1);
        fclose(fp);
        fgetc(stdin); //getchar();
    }

    return 0;
}