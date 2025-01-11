#include "functions.h"

char* loadFileIntoMemory(const char* filename, size_t* fileSize) 
{
    // Open the file in binary read mode
    FILE* file = fopen(filename, "rb");
    if (file == NULL) 
    {
        printf("Error opening the file.\n");
        return NULL;
    }
    // Get the file size
    fseek(file, 0, SEEK_END);
    *fileSize = ftell(file);
    rewind(file);

    // Allocate memory to hold the file contents
    char* buffer = (char*)malloc(*fileSize + 1);
    if (buffer == NULL) 
    {
        printf("Error allocating memory for file contents.\n");
        fclose(file);
        return NULL;
    }

    // Read the file into memory
    size_t bytesRead = fread(buffer, 1, *fileSize, file);
    if (bytesRead != *fileSize) 
    {
        printf("Error reading the file into memory.\n");
        free(buffer);
        fclose(file);
        return NULL;
    }

    buffer[*fileSize] = '\0';
    fclose(file);

    printf("File loaded.\n");
    return buffer;
}

bool searchWordInMemory(const char* buffer, size_t fileSize, const char* word) 
{

    size_t wordLength = strlen(word);

    for (size_t i = 0; i <= fileSize - wordLength; i++) 
    {
        if (strncmp(buffer + i, word, wordLength) == 0) 
        {
            return true;
        }
    }

    return false;
}

void addWordToMemory(char** buffer, size_t* fileSize, const char* word) 
{
    size_t wordLength = strlen(word);
    size_t newSize = *fileSize + wordLength + 2;//+ 2 for \n and \0 

    char* newBuffer = (char*)realloc(*buffer, newSize);
    if (newBuffer == NULL) 
    {
        printf("Error reallocating memory for adding the word.\n");
        return;
    }

    newBuffer[*fileSize] = '\n';
    memcpy(newBuffer + *fileSize + 1, word, wordLength);
    newBuffer[newSize - 1] = '\0';

    *buffer = newBuffer;
    *fileSize = newSize - 1;
}

void deleteWordFromMemory(char** buffer, size_t* fileSize, const char* word) 
{
    size_t wordLength = strlen(word);
    char* position = *buffer;
    char* endOfBuffer = *buffer + *fileSize;

    while ((position = strstr(position, word)) != NULL) 
    {
        // Calculate the number of bytes to shift after the word is deleted.
        size_t bytesToShift = endOfBuffer - (position + wordLength) + 1;
        // Perform the deletion by moving the buffer contents after the word.
        memmove(position, position + wordLength, bytesToShift);
        // Update the endOfBuffer pointer and fileSize after deletion.
        endOfBuffer -= wordLength;
        *fileSize -= wordLength;
    }

    (*buffer)[*fileSize] = '\0';
}

void displayBuffer(const char* buffer) 
{
    printf("Buffer content:\n%s\n", buffer);
}

void loadSecondFileWithoutDuplicates(char** buffer, size_t* fileSize, const char* filePath) 
{
    FILE* file = fopen(filePath, "rb");
    if (file == NULL) 
    {
        printf("Error opening the second file.\n");
        return;
    }

    // Temporary buffer to store each word read from the second file.
    char word[50];
    // Read words from the second file until no more words can be read.
    while (fscanf(file, "%50s", word) == 1) 
    {
        // If the word is not already present in the original buffer, add it.
        if (!searchWordInMemory(*buffer, *fileSize, word)) 
        {
            addWordToMemory(buffer, fileSize, word);
        }
    }

    fclose(file);
    printf("Second file loaded and duplicates removed.\n");
}

int menu()
{
    char filename[100];
    printf("Enter the filename: ");
    scanf("%99s", filename);

    clock_t startLoadFile = clock();

    size_t fileSize;
    char* buffer = loadFileIntoMemory(filename, &fileSize);

    clock_t endLoadFile = clock();
    double secondsLoadFile = (double)(endLoadFile - startLoadFile) / CLOCKS_PER_SEC;

    printf("Elapsed time for loading the first file: %f seconds\n", secondsLoadFile);
    if (buffer == NULL) 
    {
        return 1;
    }

    char choice;
    char word[100];

    while (1)
    {
        printf("Menu:\n");
        printf("1. Search for a word\n");
        printf("2. Add a word\n");
        printf("3. Delete a word\n");
        printf("4. Display buffer\n");
        printf("5. Load second file (without duplicates)\n");
        printf("6. Exit\n");
        printf("Enter your choice (1/2/3/4/5/6): ");
        scanf(" %c", &choice);

        switch (choice)
        {
            case '1':
                printf("Enter the word you want to search for: ");
                scanf("%99s", word);

                clock_t start = clock();

                if (searchWordInMemory(buffer, fileSize, word)) 
                {
                    printf("Word '%s' found in the file.\n", word);
                } 
                else 
                {
                    printf("Word '%s' not found in the file.\n", word);
                }

                clock_t end = clock();
                double seconds = (double)(end - start) / CLOCKS_PER_SEC;
                printf("Elapsed time for searching: %f seconds\n", seconds);
                break;

            case '2':
                printf("Enter the word you want to add: ");
                scanf("%99s", word);

                start = clock();

                addWordToMemory(&buffer, &fileSize, word);
                printf("Word '%s' added to the file.\n", word);

                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                printf("Elapsed time for adding: %f seconds\n", seconds);
                break;

            case '3':
                printf("Enter the word you want to delete: ");
                scanf("%99s", word);

                start = clock();

                deleteWordFromMemory(&buffer, &fileSize, word);
                printf("Word '%s' deleted from the file.\n", word);

                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                printf("Elapsed time for deleting: %f seconds\n", seconds);
                break;

            case '4':
                displayBuffer(buffer);
                break;

            case '5':
                printf("Enter the path of the second file: ");
                scanf("%99s", word);

                start = clock();

                loadSecondFileWithoutDuplicates(&buffer, &fileSize, word);

                end = clock();
                seconds = (double)(end - start) / CLOCKS_PER_SEC;
                printf("Elapsed time for loading the second file: %f seconds\n", seconds);
                break;

            case '6':
                printf("Exiting the program.\n");
                free(buffer);
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}