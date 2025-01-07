#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int num = 512;
    FILE *fp;

    fp = fopen("myFirstFile.txt", "w");

    if(fp != NULL)//file was opened succsesfuly 
    {
        fprintf(stdout, "%d", num);//printf("%d", num);
        fprintf(fp, "%d", &num);//scanf("%d", &num);
        printf("num from file = %d\n",num);
        fclose(fp);
    }

    return 0;
}