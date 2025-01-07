#include <stdio.h>
#include <stdlib.h>

int main()
{
    double height, width;
    double area;
    
    printf("Enter height: ");
    scanf("%lf", &height);
    
    printf("Enter width: ");
    scanf("%lf", &width);
    
    area = height * width;
    printf("The area of this rectangle = %lf", area);
    
    return 0;
}