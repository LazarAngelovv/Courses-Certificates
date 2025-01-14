#include <stdio.h>
#include <stdlib.h>

struct point_struct
{
    int x;
    int y;
};

union point_union
{
    int x;
    int y;
};

int main()
{
    struct point_struct point1;
    union point_union point2;
    
    point1.x = 5;
    point1.y =7;
    printf("Struct Point = (%d,%d)\n", point1.x, point1.y);

    point1.y = 10;
    printf("After change --> Struct Point = (%d, %d)\n", point1.x, point2.y);

    point2.x = 3;
    printf("Union Point = (%d, %d)\n", point2.x, point2.y);

    point2.y = 4;
    printf("After Change --> Union Poin = (%d, %d)\n", point2.x, point2.y);

    return 0;
}