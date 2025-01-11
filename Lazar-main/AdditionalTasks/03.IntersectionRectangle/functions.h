#ifndef INTERSETIONRECTANGLE_H
#define INTERSETIONRECTANGLE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct 
{
    int leftX;
    int bottomY;
    int width;
    int height;
} Rectangle;

//Functions to read rectangles coordinates and dimensions
void readRectangles(Rectangle *rect1, Rectangle *rect2);

//Functions to calculate intersection rectangle
Rectangle calculateIntersection(Rectangle rect1, Rectangle rect2);

#endif
