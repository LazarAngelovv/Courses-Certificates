#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <unistd.h>

// PRICES DEFINES
// Drinks
#define PRICE_WATER      2
#define PRICE_FRAPPE     3
#define PRICE_FANTA      3
#define PRICE_SPRITE     3
#define PRICE_ICE_TEA    3
#define PRICE_COCA_COLA  3

// Foods
#define PRICE_FRENCH_FRIES     5
#define PRICE_CLUB_SANDWICHES  8
#define PRICE_VEGGIE_BURGER    8
#define PRICE_CAPRESE_SALAD    8
#define PRICE_CAESAR_SALAD     10
#define PRICE_CHICKEN_BURGER   10

// Helper function to open the file and return the file pointer
FILE* openBillFile();
// Helper function to close the file
void closeBillFile(FILE* filePointer);
// Print the menu
void printMenu();
// Get purchase quantity from user
int getUserQuantity();
// Get user choice
int getUserChoice();
// Process the purchase and calculate the total bill
void processPurchase(FILE* filePointer);

int main();