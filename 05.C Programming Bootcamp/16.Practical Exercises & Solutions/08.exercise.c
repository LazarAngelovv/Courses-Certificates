#include <stdio.h>
#include <stdlib.h>

//Find if the sequence is very ascending or not ascencing
int main()
{
    int sequenceSize;
    int previousValue = 0;
    int currentValue = 0;

    int veryAscendingFlag = 1;
    printf("Insert size(total size of the sequence): ");
    scanf(" %d", &sequenceSize);

    if(sequenceSize <=0)
        printf(" Wait a minute...Try again please!\n");
    else
    {
        do{
            printf("Insert Value: ");
            scanf(" %d", &currentValue);
            
            if( currentValue < 0)
                printf("Number isn't positive!\n");
            else
            {
                if(currentValue <= previousValue)
                    veryAscendingFlag = 0;
                    previousValue =currentValue;
                    sequenceSize--;
            }   
        }
        while(sequenceSize > 0);
        if(veryAscendingFlag == 1)
            printf("This Sequence is Very Ascending! \n");
        else
            printf("This Sequence is not Ascending.");
    }
    
    return 0;
}