#include <stdio.h>

//Writing 2 Points read from the user to a file
typedef struct point
{
    int x;
    int y;
}Point;

int main()
{
    Point p1, p2;
    FILE* fp = NULL;

    printf("Enter x1: ");
    scanf("%d", &p1.x);

    printF("Enter y1: ");
    scanf("%d", &p1.x);

    printf("Enter x2: ");
    scanf("%d", &p1.x);

    printf("Enter y2: ");
    scanf("%d", &p1.x);
    
    fp = fopen("myFile2.bin", " wb");
    if(fp != NULL)
    {
        printf("File was successfully opend for binary writing..");
        fwrite(&p1, sizeof(Point), 1, fp);
        fwrite(&p2, sizeof(Point), 1, fp);

        fclose(fp)
    }
    
    return 0;
}