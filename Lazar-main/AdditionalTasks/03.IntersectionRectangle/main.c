#include "functions.h"

//Run the project in terminal
//gcc main.c,functions.c
//gcc -c main.c -o main.o
//.\a.exe

int main() 
{
    Rectangle rect1;//Create  rectangle 1
    Rectangle rect2;//Create  rectangle 2

    readRectangles(&rect1, &rect2);

    Rectangle intersection = calculateIntersection(rect1, rect2);

    printf("Intersecting rectangle: LeftX = %d, BottomY = %d, Width = %d, Height = %d\n",intersection.leftX, intersection.bottomY, intersection.width, intersection.height);
    
    return 0;
}