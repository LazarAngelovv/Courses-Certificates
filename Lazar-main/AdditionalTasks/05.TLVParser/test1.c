#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//STEP 1
void getInputString(char array[], int size)
{
    printf("Enter your package: ");
    fgets(array, size, stdin);
    if (array[strlen(array) - 1] == '\n')
    {
        array[strlen(array) - 1] = '\0';
    }
}

//STEP 2
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

//STEP 3
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
        sprintf(&finalHexString[j], "%c", hexValue);
        j++;
    }
    return finalHexString;
}

//STEP 4 //DOESN'T WORK
void parseTLV(unsigned char *inputString, int length)
{
    int index = 0;

    while (index < length)
    {
        unsigned char tag = inputString[index++];

        int tagNumber = tag & 0X1F;
        int isConstructed = (tag & 0x20) >> 5;

        if (tagNumber == 0x1F)
        {
            tagNumber = 0;
            unsigned char nextByte;
            do
            {
                nextByte = inputString[index++];
                tagNumber = (tagNumber << 7) | (nextByte & 0x7F);
            } while (nextByte & 0x80);
        }

        unsigned char lengthByte = inputString[index++];
        int lengthValue;

        if (lengthByte & 0x80)
        {
            int lengthBytes = lengthByte & 0x7F;
            lengthValue = 0;

            for (int i = 0; i < lengthBytes; i++)
            {
                lengthValue = (lengthValue << 8) | inputString[index++];
            }
        }
        else
        {
            lengthValue = lengthByte;
        }
        printf("Tag: %02X", tag);
        if (isConstructed)
        {
            printf(" (Constructed Tag)");
            printf(", Length: %02X\n", lengthValue);
            parseTLV(inputString + index, lengthValue); // Recursive call to extract tags within the constructed tag
            index += lengthValue;// Move the index forward by the length of the constructed tag
        }
        else
        {
            printf(", Length: %02X, Value: ", lengthValue);

            // Process the value of the tag
            for (int i = 0; i < lengthValue; i++)
            {
                printf("%02X ", inputString[index++]);
            }
            printf("\n");
        }
    }
}

//COMBINE ALL STEPS 
void buildFunction()
{
    char userString[100];
    //STEP 1
    getInputString(userString, sizeof(userString));
    //STEP 2
    removeWhiteSpaces(userString);
    //STEP 3
    char *hexString = convertToHex(userString);
    //STEP 4
    parseTLV((unsigned char *)hexString, strlen(hexString));
    free(hexString); // Free dynamically allocated memory
}

//RUN
int main()
{
    buildFunction();
    return 0;
}