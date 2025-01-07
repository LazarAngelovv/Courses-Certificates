#include <stdio.h>

typedef struct 
{
    int x;
    int y;
} Point;

void printPoint(Point p1) 
{
    printf("Point x = %d)\n", p1.x);
    printf("Point y = %d)\n", p1.y);
}
Point inputPoint()
{
    Point myPoint;
    printf("Enter x coordinate: ");
    scanf("%d", &myPoint.x);
    
    printf("Enter y coordinate: ");
    scanf("%d", &myPoint.y);

    return myPoint;
}

int main() {
    
    Point p1 = inputPoint();
    
    printf("P1 before changes\n");
    printPoint(p1);
    
    p1.x += 1;
    p1.y += 3;
    
    printf("P1 after changes\n");
    printPoint(p1);

    return 0;
}
