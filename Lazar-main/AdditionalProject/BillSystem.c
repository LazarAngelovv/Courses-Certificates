#include "BillSystem.h"

// Helper function to open the file and return the file pointer
FILE* openBillFile()
{
    FILE* filePointer = fopen("bill.txt", "w");
    if (filePointer == NULL)
    {
        printf("Unable to open the file.\n");
        exit(1);
    }
    return filePointer;
}

// Helper function to close the file
void closeBillFile(FILE* filePointer)
{
    fclose(filePointer);
}

// Print the menu
void printMenu()
{
    printf("=====================================\n");
    printf("           BAR&DINNER                \n");
    printf("=====================================\n");
    printf("             DRINKS                  \n");
    printf("=====================================\n");
    printf("    1.  WATER            (%d$)       \n", PRICE_WATER    );
    printf("    2.  FRAPPE           (%d$)       \n", PRICE_FRAPPE   );
    printf("    3.  FANTA            (%d$)       \n", PRICE_FANTA    );
    printf("    4.  SPRITE           (%d$)       \n", PRICE_SPRITE   );
    printf("    5.  ICE TEA          (%d$)       \n", PRICE_ICE_TEA  );
    printf("    6.  COCA COLA        (%d$)       \n", PRICE_COCA_COLA);
    printf("=====================================\n");
    printf("              FOOD                   \n");
    printf("=====================================\n");
    printf("    7.  FRENCH FRIES     (%d$)       \n", PRICE_FRENCH_FRIES   );
    printf("    8.  CLUB SANDWICHES  (%d$)       \n", PRICE_CLUB_SANDWICHES);
    printf("    9.  VEGGIE BURGER    (%d$)       \n", PRICE_VEGGIE_BURGER  );
    printf("    10. CAPRESE SALAD    (%d$)       \n", PRICE_CAPRESE_SALAD  );
    printf("    11. CAESAR SALAD     (%d$)       \n", PRICE_CAESAR_SALAD   );
    printf("    12. CHICKEN BURGER   (%d$)       \n", PRICE_CHICKEN_BURGER );
    printf("        0. BILL :)                   \n");
    printf("=====================================\n");
}

// Get purchase quantity from user
int getUserQuantity()
{
    int quantity;
    printf("ENTER QUANTITY: ");
    scanf("%d", &quantity);
    return quantity;
}

// Get user choice
int getUserChoice()
{
    int choice;
    printf("\nENTER NUMBER OF PURCHASE: ");
    scanf("%d", &choice);
    return choice;
}

// Process the purchase and calculate the total bill
void processPurchase(FILE* filePointer)
{
    int totalSum = 0;
    int choice;
    int quantity;
    int totalTotalSum = 0;

    fprintf(filePointer,"\t\t BAR&DINNER\n");
    fprintf(filePointer,"\n================================================\n");

    while (true)
    {
        choice = getUserChoice();
        quantity = getUserQuantity();

        switch (choice)
        {
            case 1:
                fprintf(filePointer, "Item: WATER \t\t X %d\t Total: %d$\n", quantity, totalSum); 
                totalSum = quantity * PRICE_WATER;
                totalTotalSum += totalSum;
               
                break;
            case 2:
                fprintf(filePointer, "Item: FRAPPE \t\t X %d\t Total: %d$\n", quantity, totalSum); 
                totalSum = quantity * PRICE_FRAPPE;
                totalTotalSum += totalSum;
   
                break;
            case 3:
                fprintf(filePointer, "Item: FANTA \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_FANTA;
                totalTotalSum += totalSum;

                break;
            case 4:
                fprintf(filePointer, "Item: SPRITE \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_SPRITE;
                totalTotalSum += totalSum;

                break;
            case 5:
                fprintf(filePointer, "Item: ICE TEA \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_ICE_TEA;
                totalTotalSum += totalSum;

                break;
            case 6:
                fprintf(filePointer, "Item: COCA COLA \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_COCA_COLA;
                totalTotalSum += totalSum;

                break;
            case 7:
                fprintf(filePointer, "Item: FRENCH FRIES \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_FRENCH_FRIES;
                totalTotalSum += totalSum;

                break;
            case 8:
                fprintf(filePointer, "Item: CLUB SANDWICHES \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_CLUB_SANDWICHES;
                totalTotalSum += totalSum;

                break;
            case 9:
                fprintf(filePointer, "Item: VEGGIE BURGER \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_VEGGIE_BURGER;
                totalTotalSum += totalSum;

                break;
            case 10:
                fprintf(filePointer, "Item: CAPRESE SALAD \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_CAPRESE_SALAD;
                totalTotalSum += totalSum;

                break;
            case 11:
                fprintf(filePointer, "Item: CAESAR SALAD \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_CAESAR_SALAD;
                totalTotalSum += totalSum;

                break;
            case 12:
                fprintf(filePointer, "Item: CHICKEN BURGER \t\t X %d\t Total: %d$\n", quantity, totalSum);
                totalSum = quantity * PRICE_CHICKEN_BURGER;
                totalTotalSum += totalSum;
                break;
            case 0:
                fprintf(filePointer, "\n================================================\n");
                fprintf(filePointer, "\t\t\tTOTAL AMOUNT:%d$", totalTotalSum);
                printf("Thank you!");
                closeBillFile(filePointer);
                exit(1);
                break;
        }
    }
}