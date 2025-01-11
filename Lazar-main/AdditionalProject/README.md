## Bar&Dinner Billing System
The Bar&Dinner Billing System is a simple command-line program written in C that allows customers to select items from a menu,
specify quantities, and generates a bill with the total cost in a text file.

## How to Use
gcc main.c, BillSystem.c
gcc -c main.c -o main.o
gcc .\a.exe

## Features
Provides a menu with various drink and food items.
Allows users to choose items and quantities for purchase.
Calculates the total cost based on the selected items and quantities.
Generates a bill and saves it to a file named bill.txt.
Provides a clear interface for customers to make their selections.

## Code Structure
The program is structured into several functions to improve readability and maintainability. Here's an overview of the main functions:

- main(): The entry point of the program. Opens the bill file, displays the menu, processes purchases, and closes the file.
- openBillFile(): A helper function that opens the bill.txt file and returns the file pointer.
- closeBillFile(): A helper function to close the bill file.
- printMenu(): Displays the menu of available items and their prices.
- getUserQuantity(): Prompts the user for the quantity of items to purchase and returns the input.
- getUserChoice(): Prompts the user for the item number to purchase and returns the input.
- processPurchase(): Processes the user's purchases, calculates the total cost, and generates the bill in the bill file.

## Customize Prices
You can easily customize the prices of drinks and foods by modifying the corresponding #define statements in the BillSystem.h header file.

