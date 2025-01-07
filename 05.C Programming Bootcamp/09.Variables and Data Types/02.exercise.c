#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentYear;
    int yourAge;
    int birthYear;

    printf("Enter Current Year: ");
    scanf("%d",&currentYear);
  
    printf("Enter Your Age: ");
    scanf("%d",&yourAge);
    
    birthYear = currentYear - yourAge;

    printf("You were born in %d!\n",birthYear);
    
    return 0;
}