#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

char* loadFileIntoMemory(const char* filename, size_t* fileSize);

bool searchWordInMemory(const char* buffer, size_t fileSize, const char* word);

void addWordToMemory(char** buffer, size_t* fileSize, const char* word);

void deleteWordFromMemory(char** buffer, size_t* fileSize, const char* word);

void displayBuffer(const char* buffer);

void loadSecondFileWithoutDuplicates(char** buffer, size_t* fileSize, const char* filePath);

int menu();

#endif // FUNCTIONS_H