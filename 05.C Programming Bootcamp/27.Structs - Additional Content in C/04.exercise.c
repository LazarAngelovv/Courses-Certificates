#include <stdio.h>
#include <stdlib.h>
//Lesson: Initializing a Struct
typedef struct point
{
    int x;
    int y;

}Point; 

int main()
{
    Point p1;
   
    Point p2 = { 5, 7};

    Point p3 = { .x = 3, .y = 4};

    Point p4 = { .y = 10, x = 7};

    Point p5 = { .x = 1};
    
    return 0;
}
