#include <stdio.h>

// Related to Data Alignment //
// Code Example #2.1 //
// This example emphasizes that a struct is going to be aligned to the Largest Type Alignment Requirement!
// ** And that's to make sure that this type fits exactly where it should! **//
typedef struct point 
{
	char x;
	int z;
	double y;
}Point;

void main()
{
	Point p1;
	unsigned int totalBytes = sizeof(Point);

	p1.x = 0xFF;
	// Note: The information in "y" is not going to be that readable since it's stored in a "double" type.. (floating point, etc).
	p1.y = 0x0123456789ABCDEF; // 8 bytes = 16 hexadecimal characters
	p1.z = 0x1234ABCD; // 4 bytes = 8 hexadecimal characters
}