#include <stdio.h>
#include <stdlib.h>

//swap 2 variables without third
int main()
{
    int x = 5;
    int y = 9;
    
    printf("Value of x = %d value of y = %d\n", x, y);
    
    x = x + y;
    y = x - y;
    x = x - y;
   
    printf("Value of x = %d value of y = %d\n", x, y);
  
    return 0;
}