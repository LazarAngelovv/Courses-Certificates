#include <stdio.h>

// Related to Data Alignment //
// Code Example #1 // 
typedef struct point 
{
	char x;
	short y;
	int z;
}Point;

void main()
{
	unsigned int totalStructBytes = sizeof(Point);
	Point p1;

	p1.x = 0xFF; // 1 byte of memory
	p1.y = 0x1234; // 2 bytes of memory
	p1.z = 0x6789ABCD; // 4 bytes of memory
}
