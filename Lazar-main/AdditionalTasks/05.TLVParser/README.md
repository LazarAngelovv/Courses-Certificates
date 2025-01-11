# TLV Parser
- (TAG,LENGTH,VALUE)

## Summary
- The code reads a user-provided TLV string, processes it, and outputs the individual tags, their types (constructed or primitive), lengths, and corresponding values in hexadecimal format. It handles recursive constructions to extract nested TLV tags.

## Functions Overview
- getInputString: This function gets an input string from the user using fgets and removes the trailing newline character if present.

- removeWhiteSpaces: This function removes any whitespace characters (spaces, tabs, newlines, and carriage returns) from the input string.

- convertToHex: This function converts the input string (which represents a sequence of hexadecimal characters) into a byte array.

- getTag: This function extracts tag byte from the input string and handles cases when the tag byte has a special value (0x1F).

- checkIsConstructed: This function checks if a given tag byte indicates a constructed tag (bit 5 is set).

- getLength: This function extracts the length byte from the input string and handles cases when the high bit is set (indicating a multi-byte length).

- printTagValue: This recursive function prints the tag, whether it's constructed or primitive, the length, and the corresponding value in hexadecimal format. If the tag is constructed, it calls itself recursively to extract tags within the constructed tag.

- parseTLV: This function iterates through the input string and parses the TLV structure by calling getTag, checkIsConstructed, getLength, and printTagValue.

- buildFunction: This function is the entry point of the program. It takes user input, processes it, and calls the parseTLV function.

## How to RUN
- Open terminal
- gcc main.c, functions.c
- gcc -c main.c -o main.o
- .\a.exe

## Sample Inputs
- 61 1F 4F 08 A0 00 00 00 25 01 05 01 50 10 50 65 72 73 6F 6E 61 6C 20 41 63 63 6F 75 6E 74 87 01 01
- 61 1E 4F 07 A0 00 00 00 29 10 10 50 10 50 65 72 73 6F 6E 61 6C 20 41 63 63 6F 75 6E 74 87 01 02
- 77 22 82 02 78 00 94 1C 10 01 04 00 10 05 05 00 08 06 06 01 08 07 07 01 08 08 09 01 08 0A 0A 00 08 01 04 00
- 77 1E 9F 27 01 80 9F 36 02 02 13 9F 26 08 2D F3 83 3C 61 85 5B EA 9F 10 07 06 84 23 00 31 02 08

