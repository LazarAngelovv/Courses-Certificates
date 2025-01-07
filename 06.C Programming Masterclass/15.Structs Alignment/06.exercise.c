#include <stdio.h>

// This is a very similar exercise to the previous one //
// The only difference and the main point of what needed to be said here //
// is that we add additional field called "short" (of 2 bytes length) //
// and what you have to notice is that this field is ALIGNED to start //
// only from addresses that are multiples of "2" (it's 2 aligned).

typedef struct point1 
{
	char x;
	char z; 
	double y;
}Point1;

typedef struct point 
{
	char t; 
	short x;
	char z;
	double y;
}Point;

void main()
{
	Point p1;
	unsigned int totalBytes = sizeof(Point);
	p1.t = 0x11;
	p1.x = 0xAABB;
	p1.z = 0xEE;
	p1.y = 0x123456789ABCDEF;
}