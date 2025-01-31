#include <stdio.h>
#include <stdlib.h>

//Insert function for Array
void *insert(void* arr, unsigned size, unsigned idx, void* source, unsigned sourceSize)
{
    void* newArr = malloc(size + sourceSize);
    if(!newArr)
        return NULL;
    memcpy(newArr, arr, idx);
    memcpy((char*)newArr + idx,  source, sourceSize);
    memcpy((char*)newArr + idx + sourceSize,(char*)arr + idx, size - idx);
}
void printArr(int* arr, int size)
{
	int i;
	for(i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n\n");
}

int main()
{
	int* grades = (int*)malloc(3 * sizeof(int));
	int grade;
	int* updatedArr = NULL;

	if (!grades) 
        return NULL;
	grades[0] = 90;
	grades[1] = 80;
	grades[2] = 100;
	printArr(grades, 3);

	printf("Enter additional grade to add to arr: ");
	scanf("%d", &grade);
	updatedArr = (int*)insert(grades, 3 * sizeof(int), 2*sizeof(int), &grade, sizeof(grade));
	printArr(updatedArr, 4);

	return 0;
}