#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    int x;
    int y;
}Point;

int main()
{
    Point p = {3, 5};
    FILE* fp = fopen("myFile.bin", "wb");
    if(fp != NULL)
    {
        printf("File was sucsesfully opend for binary writing...\n");
        fwrite(&p, sizeof(Point), 1,fp);
        fclose(fp);
    }

    return 0;
}