#include <stdio.h>
#include <stdlib.h>
#define BUF 256
// Function prototype: checks if a character 'ch' is present in the string 'line'
int has_ch(char ch, const char *line);

int main(int argc, char *argv[])
{
    FILE *fp = NULL;    // File pointer
    char ch = '\0';     // Character to search for
    char line[BUF];     // Buffer to store each line of the file

    // Checking command line arguments
    if (argc != 3)
    {
        printf("Usage: %s character filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    ch = argv[1][0];    // Extracting the character from command line argument

    // Opening the file for reading
    if ((fp = fopen(argv[2], "r")) == NULL)
    {
        printf("Can't open %s\n", argv[2]);
        exit(EXIT_FAILURE);
    }

    // Reading each line from the file
    while (fgets(line, BUF, fp) != NULL)
    {
        // Checking if the character is present in the line
        if (has_ch(ch, line))
            fputs(line, stdout);     // Printing the line to the standard output
    }

    fclose(fp);    // Closing the file
    return 0;
}

// Function to check if a character 'ch' is present in the string 'line'
int has_ch(char ch, const char *line)
{
    while (*line)
    {
        if (ch == *line++)
            return 1;    // Character found, return true
    }

    return 0;    // Character not found, return false
}
