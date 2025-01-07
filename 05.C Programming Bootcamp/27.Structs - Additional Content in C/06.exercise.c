#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    int x;
    int y;
}Point;

int main()
{

    Point pointsArray[5];
    int i;

    for(i  = 0; i < 5; i++)
    {
        printf("Enter at first point 'x' coordinate: ",i + 1);
        scanf("%d", &pointsArray[0].x);

        printf("Enter a first point 'y' coordinate: ",i + 1);
        scanf("%d", &pointsArray[0].y);
    }
    
    for(i  = 0; i < 5; i++)
    {
        printf("Point #%d = (%d,%d)\n", i + 1, pointsArray[i].x, pointsArray[i].y);
    }
    
    return 0;
}