#include "functions.h"

void readRectangles(Rectangle *rect1, Rectangle *rect2) 
{   //Read and print coordinates and dimensions for the first rectangle (from user)
    printf("Enter the coordinates and dimensions of the first rectangle:\n");
    printf("LeftX: ");
    scanf("%d", &(rect1->leftX));
    printf("BottomY: ");
    scanf("%d", &(rect1->bottomY));
    printf("Width: ");
    scanf("%d", &(rect1->width));
    printf("Height: ");
    scanf("%d", &(rect1->height));

    //Read and print coordinates and dimensions for the second rectangle (from user)
    printf("Enter the coordinates and dimensions of the second rectangle:\n");
    printf("LeftX: ");
    scanf("%d", &(rect2->leftX));
    printf("BottomY: ");
    scanf("%d", &(rect2->bottomY));
    printf("Width: ");
    scanf("%d", &(rect2->width));
    printf("Height: ");
    scanf("%d", &(rect2->height));
}

Rectangle calculateIntersection(Rectangle rect1, Rectangle rect2) //Calculate coordinates and dimensions for intersection rectangle
{
    Rectangle intersection;
    //Calculate coordinate x
    if (rect1.leftX > rect2.leftX) 
        intersection.leftX = rect1.leftX;
    else 
        intersection.leftX = rect2.leftX;
    
    //Calculate coordinate y
    if (rect1.bottomY > rect2.bottomY) 
       intersection.bottomY = rect1.bottomY;
    else 
       intersection.bottomY = rect2.bottomY;

    //Calculate width
    if ((rect1.leftX + rect1.width) < (rect2.leftX + rect2.width)) 
        intersection.width = rect1.leftX + rect1.width;
    else 
       intersection.width = rect2.leftX + rect2.width;
    
    //Calculate height
    if ((rect1.bottomY + rect1.height) < (rect2.bottomY + rect2.height))
       intersection.height = rect1.bottomY + rect1.height;
    else 
        intersection.height = rect2.bottomY + rect2.height;


    if (intersection.leftX >= intersection.width || intersection.bottomY >= intersection.height)//If this is True set everything to zero there is no intersection
    {
        intersection.leftX = 0;
        intersection.bottomY = 0;
        intersection.width = 0;
        intersection.height = 0;
    } 
    else 
    {
        // intersection.leftX = intersection.leftX;
        // intersection.bottomY = intersection.bottomY;
        intersection.width = intersection.width - intersection.leftX;
        intersection.height = intersection.height - intersection.bottomY;
    }

    return intersection;
}