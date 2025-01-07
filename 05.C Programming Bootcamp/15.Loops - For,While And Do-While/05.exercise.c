#include <stdio.h>
#include <stdlib.h>

int main()
{
    int price = 0; 
    int totalPrice = 0;
    
    do
    {
        printf("Please enter a price: ");
        scanf("%d", &price);
        totalPrice = totalPrice + price;
    }
    while(price != 0);
   
    printf("Total Order Price = %d \n", totalPrice);
    
    return 0;
}