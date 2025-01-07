#include <stdio.h>
#include <stdlib.h>

// union <union_name>
// {
//     datatype1 field1;
//     datatype2 field2;

// };

union info
{
    char firstName[20];
    int age;

};

union minMax
{
    int min;
    int max;
    double average;
};

int main()
{
    //Template - For creating a union variable
    //union <union_name> <variable_name>;
    
    return 0;
}