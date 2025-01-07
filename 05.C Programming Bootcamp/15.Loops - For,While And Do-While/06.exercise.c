#include <stdio.h>
#include <stdlib.h>

int main()
{
    int validGrade;
    
    do
    {    
        
        printf("\nEnter Valid Grade: ");
        scanf("%d", &validGrade);

        if(validGrade > 0 && validGrade < 100)
            printf("Thanks! You've inserted %d, which is valid grade!\n",validGrade);
        
        else
            printf("Your grade is not valid.Try again.\n");
        
    } while (validGrade != -1);
   
    return 0;   
}