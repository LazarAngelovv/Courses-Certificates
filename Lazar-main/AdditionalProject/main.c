#include "BillSystem.h"

int main()
{
    FILE* billFile = openBillFile(); // Open the file at the beginning

    printMenu();
    processPurchase(billFile); // Pass the file pointer to processPurchase

    return 0;
}