#include <stdio.h>
#include <stdlib.h>

//Read numbers from a file
int main()
{   
    int num1;
    int num2;

    int result;
    
    FILE *fp;

    fp = fopen("exerciseFile.txt", "r");

    if(fp != NULL)//file was opened succsesfuly 
    {
        for(int i = 1; i <= 10; i++)
            fscanf(fp, "%d %d\n",&num1, &num2);
            printf("Read: %d %d\n",num1, num2);
    }

    fclose(fp);
    return 0;
}