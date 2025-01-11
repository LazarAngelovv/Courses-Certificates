#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to get input string from the user
void getInputString(char array[], int size) 
{
    printf("Enter your package: ");
    fgets(array, size, stdin);
    
    if (array[strlen(array) - 1] == '\n')
    {
        array[strlen(array) - 1] = '\0';
    }
}

// Function to remove white spaces from a string
void removeWhiteSpaces(char *str) 
{
    int writeIndex = 0;
    int readIndex = 0;

    for (readIndex = 0; str[readIndex]; readIndex++) 
    {
        if (str[readIndex] != ' ' && str[readIndex] != '\t' && str[readIndex] != '\n' && str[readIndex] != '\r') 
        {
            str[writeIndex++] = str[readIndex];
        }
    }
    str[writeIndex] = '\0';
}

// Function to convert a string of hexadecimal characters to a byte array
char *convertToHex(const char *inputString) 
{
    int inputLength = strlen(inputString);
    char *finalHexString = malloc((inputLength / 2) + 1);
    int i;
    int j = 0;

    for (i = 0; i < inputLength; i += 2) 
    {
        char hexByte[3];
        strncpy(hexByte, &inputString[i], 2);
        hexByte[2] = '\0';

        int hexValue = strtol(hexByte, NULL, 16);
        finalHexString[j++] = (char)hexValue; // Store hexValue as a char
    }
    finalHexString[j] = '\0';
    return finalHexString;
}

// Function to extract the tag from the input string
unsigned char getTag(unsigned char *inputString, int *index) 
{
    unsigned char tag = inputString[(*index)++];
    
    // Handle the case when tag byte is 0x1F
    if ((tag & 0x1F)== 0x1F) 
    {
        while ((inputString[(*index)++] & 0x80) == 0x80) 
        {
            tag = ((tag << 8) | inputString[(*index)++]);
        }
    }
    return tag;
}

// Function to check if the tag is constructed
int checkIsConstructed(unsigned char tag) 
{
    return (tag & 0x20);
}

// Function to extract the length from the input string
int getLength(unsigned char *inputString, int *index) 
{
    unsigned char lengthByte = inputString[(*index)++];

    if (lengthByte & 0x80) 
    {
        // Handle the case when the high bit is set
        int lengthBytes = lengthByte & 0x7F;
        (*index) += lengthBytes;
    }
    return lengthByte;
}

// Recursive function to parse the TLV structure
void printTagValue(unsigned char tag, int isConstructed, int lengthValue, const unsigned char *inputString, int *index) 
{
    // If Tag is constructed
    printf("Tag: %02X", tag);

    if (isConstructed) 
    {
        printf(" (Constructed Tag)");
        printf(", Length: %02X", lengthValue);
        printf(", Value: ");
        
        for (int i = 0; i < lengthValue; i++) 
        {
            printf("%02X ", inputString[*index + i]);
        }
    }
    
    // If tag is not constructed
    if (!isConstructed) 
    {
        printf(" (Primitive Tag)");
        printf(", Length: %02X", lengthValue);
        printf(", Value: ");
        
        for (int i = 0; i < lengthValue; i++) 
        {
            printf("%02X ", inputString[*index + i]);
        }
        *index += lengthValue;
    }
    printf("\n");
}

void parseTLV(unsigned char *inputString, int length, int *index)
{
    while (*index < length) 
    {
        unsigned char tag = getTag(inputString, index);
        int isConstructed = checkIsConstructed(tag);
        int lengthValue = getLength(inputString, index);

        printTagValue(tag, isConstructed, lengthValue, inputString, index);

        if (isConstructed) 
        {
            int currentIndex = *index; // Store the current index
            parseTLV(inputString, currentIndex + lengthValue, index); // Recursive call to extract tags within the constructed tag
        }
    }
}

// Function to build and process the TLV structure
void buildFunction() 
{
    char userString[100];
    getInputString(userString, sizeof(userString));
    removeWhiteSpaces(userString);

    char *hexString = convertToHex(userString);
    int index = 0; // Initialize the index
    parseTLV((unsigned char *)hexString, strlen(hexString), &index);

    free(hexString); // Free dynamically allocated memory
}

int main() 
{
    buildFunction();
    return 0;
}