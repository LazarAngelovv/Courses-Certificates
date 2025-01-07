#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *buffer;            // Pointer to store the input buffer
    size_t bufsize = 32;     // Initial size of the buffer
    size_t characters;       // Number of characters read

    buffer = (char *)malloc(bufsize * sizeof(char));   // Allocate memory for the buffer
    if (buffer == NULL)
    {
        perror("Unable to allocate buffer");   // Display an error message if memory allocation fails
        exit(1);                               // Terminate the program with an error code
    }

    printf("Type something: ");                  // Prompt the user for input
    characters = getline(&buffer, &bufsize, stdin);   // Read input from the user
    printf("%zu characters were read.\n", characters); // Display the number of characters read
    printf("You typed: '%s'\n", buffer);           // Display the input provided by the user

    return (0);
}
