#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//distance = sqrt((x1 - x2))^ + (y1 - y2)^2)

int main()
{
    float x1;
    float x2;
    float y1;
    float y2;

    float distance;

    printf("Enter X1: ");
    scanf("%f", &x1);
    
    printf("Enter X1: ");
    scanf("%f", &x1);
    
    printf("Enter X1: ");
    scanf("%f", &x1);
    
    printf("Enter X1: ");
    scanf("%f", &x1);
    
    distance = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    
    printf("The distance between the points (%.2f,%.2f) and (%.2f,%.2f) is %.2f\n", x1, y1, x2, y2, distance);

    return 0;    
}