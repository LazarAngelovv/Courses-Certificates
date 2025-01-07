#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    int x;
    int y;
};

int main()
{
    struct point points Array[5];
    int i;

    printf("Enter a first point 'x' coordinate: ");
    scanf("%d", &pointsArray[0].x);

    printf("Enter a first point 'y' coordinate: ");
    scanf("%d", &pointsArray[0].y);

    for(i = 0;i < 5; i++)
    {
        printf("Enter point #%d 'x' coordinate: ",i + 1);
        scanf("%d", &pointsArray[i].x);
        
        printf("Enter point #%d 'y' coordinate: ",i + 1);
        scanf("%d",&pointsArray[i].y);
    }

      for(i = 0;i < 5; i++)
    {
        printf("Point #%d = (%d, %d)\n",i + 1, pointsArray[i].x, pointsArray[i].y);
    }

    return 0;
}