#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x;
    int y;

    printf("Enter x and y: ");
    scanf("%d,%d", &x, &y);

    if(x > 0 && y > 0)
    {
        printf("The point(%d,%d) is located in the First Quadrant ", x, y);
    }
    else if(x < 0 && y > 0)
    {
        printf("The point(%d,%d) is located in the Second Quadrant ", x, y);
    }
    else if(x < 0 && y < 0)
    {
        printf("The point(%d,%d) is located in the Thirds Quadrant ", x, y);
    }
    else if(x > 0 && y < 0)
    {
        printf("The point(%d,%d) is located in the Thirds Quadrant ", x, y);
    }
    else
    {
        printf("The point is located at the center of (0,0)\n", x, y);
    }

    return 0;
}