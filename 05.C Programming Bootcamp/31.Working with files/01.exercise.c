#include <stdio.h>
#include <stdlib.h>

int main()
{   //Step #1 creating a pointer that points to a FILE TYPE
    FILE* fp;

    //Step #2 - opening/acces to a file
    //fp = fopen(<file_name>, <type_of_operation>);
    //         - "w" - Writing.
    //         - "r" - Reading.
    //         - "a" - Appending.

    fp = fopen("myfirstFile.txt", "r"); 
    // TODO - Complete.
    //Step #3
    //if(fp != NULL) - to make sure the open operation was succsessful
    if(fp == NULL) //- if thats the case , the file opening has filed
        printf("The Opening of the file has Failed\n");
    else //fp != NULL
        printf("The file is opened for reading! \n");

    //Step#4 - Write some code associated with the file 
    //Step#5 - Close the file.
    fclose(fp);

    return 0;
}