#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    int x;
    int y;
}Point;

int main()
{
    Point targetPoint;
    Point pointInFile;
    FILE* fp = fopen("myFile3.bin","rb");

    printf("What is the poin you're looking for?\n");
    printf("Enter x: ");
    scanf("%d", &targetPoint.x);
    printf("Enter y: ");
    scanf("%d", &targetPoint.y);

    if(fp != NULL)
    {
        while(!feof(fp))
        {
            fread(&pointInFile, sizeof(Point), 1,fp);
            if((pointInFile.x == targetPoint) && (pointInFile.y == targetPoint.y))
                printf("Your point was found in the file!!\n");
        }
        fclose(fp);
    }
    
    return 0;
}