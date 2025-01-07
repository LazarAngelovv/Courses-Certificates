#include <stdio.h>

// Related to Data Alignment //
// Code Example #3 //
// Since this structure is aligned by the largest type alignment requirement //
// then it's not going to be just 10 bytes, but rather 8+8+8 = 24 bytes. //
//
typedef struct point 
{
	char x;
	double y;
	char z;
}Point;

// But, if we just rearrange the order of the fields in this struct //
// Then we will be able to see that the size of the struct will be different //
typedef struct point {
	char x;
	char z; 
	double y;
}Point;