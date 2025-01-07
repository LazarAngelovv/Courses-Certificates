#include <stdio.h>

// Spaghetti code: A program with tangled control flow and lack of structure

int main() {
    int value = 18;     // The value used for controlling loops and patterns
    int i = 1, j, k = 0;    // Loop control variables

    outerLoop:   // Label for the outer loop
        if (i < value) {    // Check if i is less than value
            j = i;

            innerLoop:   // Label for the inner loop
                if (j < value) {    // Check if j is less than value
                    printf(" ");    // Print a space
                    j++;
                    goto innerLoop;   // Jump back to the inner loop
                }
                else {
                    innerLoop2:   // Label for the inner loop 2
                        if (k != ((2 * i))) {
                            if (k == 0 || k == (2 * i) - 3) {
                                printf("*");   // Print an asterisk
                            }
                            printf(" ");    // Print a space
                            k++;
                            goto innerLoop2;   // Jump back to the inner loop 2
                        }

                    k = 0;    // Reset k to 0
                    printf("\n");   // Print a newline character
                    i++;
                    goto outerLoop;   // Jump back to the outer loop
                }
        }
        else {
            i = 0;   // Reset i to 0

            loop:   // Label for the loop
                if (i < (2 * value) - 1) {   // Check if i is less than (2 * value) - 1
                    printf("*");   // Print an asterisk
                    i++;
                    goto loop;   // Jump back to the loop
                }
        }

    return 0;   // Exit the program
}
