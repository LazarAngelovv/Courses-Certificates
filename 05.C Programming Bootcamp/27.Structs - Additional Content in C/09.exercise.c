#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    int x;
    int y;
}Point;

Point addition(Point p1, Point p2)
{
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}
void increment(Point* p)
{
    (*p).x++;
    (*p).y++;
}

int main()
{
    Point point1 = {1, 2};
    Point point2 = {4, 1};
    Point point3 = addition(point1, point2);
    increment(&point1);

    return 0;
}