#ifndef TLVPARSER_H
#define TLVPARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to get input string from the user
void getInputString(char array[], int size);

// Function to remove white spaces from a string
void removeWhiteSpaces(char *str);

// Function to convert a string of hexadecimal characters to a byte array
char *convertToHex(const char *inputString);

// Function to extract the tag from the input string
unsigned char getTag(unsigned char *inputString, int *index);

// Function to check if the tag is constructed
int checkIsConstructed(unsigned char tag);

// Function to extract the length from the input string
int getLength(unsigned char *inputString, int *index);

// Recursive function to parse the TLV structure
void parseTLV(unsigned char *inputString, int length, int *index);

// Function to build and process the TLV structure
void buildFunction();

#endif //TLV_PARSER_H