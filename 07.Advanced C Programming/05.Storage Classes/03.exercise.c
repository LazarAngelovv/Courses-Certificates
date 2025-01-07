#include <stdio.h>
#include <stdlib.h>

extern int count;

extern void display(void) 
{
     printf("%d\n",count+1);
}

int main() 
{
	for(count = 0 ;count < 5; count++)
     	display();

    return 0;
}
