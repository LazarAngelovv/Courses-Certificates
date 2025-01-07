#include <stdio.h>
#include <stdlib.h>

//Width * Height --> Floating Point
float areaOfRectangle(float height, float width)
{
    float area;
    area  = width * height;
    
    return area;
}

int main()
{
    float heightRectangle;
    float widthRectangle;
    float area;
   
    printf("Enter width: ");
    scanf("%f", &widthRectangle);
   
    printf("Enter height: ");
    scanf("%f", &heightRectangle);

    area = areaOfRectangle(widthRectangle,heightRectangle);
    printf("The area of your given rectangle is: %.2f\n",area);
    
   return 0;   
}