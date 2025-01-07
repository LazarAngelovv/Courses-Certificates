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
}
