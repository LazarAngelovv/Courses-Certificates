#include <stdio.h>
#include <stdlib.h>

//Writing an array of points to a file
typedef struct point
{
    int x;
    int y;
}Point;

int main()
{
    Point pointsArr[5] = {{1, 2}, {3 ,4}, {5, 6}, {7, 8}, {9, 10}}
    FILE* fp = fopen("myFile3.bin", "wb");

    if(fp != NULL)
    {
        printf("File was successfully opend for binary writing..");
       for(i = 0; i < 5; i++)
       {
        fwrite(&pointsArr[i], sizeof(Point), 1, fp);
       }
        fclose(fp)
    }
    
    return 0;
}