#include <stdio.h>

typedef struct point 
{
	int x;
	int y;
};

int main()
{
	struct point* pointsArr;
	int totalPoints;
	int i;

	printf("Enter the total number of points: ");
	scanf("%d", &totalPoints);

	pointsArr = malloc(sizeof(struct point) * totalPoints);

	for (i = 0; i < totalPoints; i++)
	{
		printf("Enter point #%d 'x' coordinate: ", i+1);
		scanf("%d", &pointsArr[i].x);
		printf("Enter point #%d 'y' coordinate: ", i+1);
		scanf("%d", &pointsArr[i].y);
	}
	for (i = 0; i < totalPoints; i++)
	{
		printf("Point #%d = (%d, %d)\n", i + 1, pointsArr[i].x, pointsArr[i].y);
	}
}
