#include <stdio.h>

typedef struct employee 
{
	char name[10];
	float age;
	int id;
}Employee;

// Solution Function #1
Employee* createEmployeesArray(int totalElements)
{
	Employee* employeesArr;
	int i;
	employeesArr = (Employee*)malloc(sizeof(Employee) * totalElements);
	for (i = 0; i < totalElements; i++)
	{
		printf("Enter a name for Employee #%d: ", i + 1);
		scanf("%s", &employeesArr[i].name); // &(employeeArr+i)->name

		printf("Enter the age for Employee #%d: ", i + 1);
		scanf("%f", &employeesArr[i].age);

		printf("Enter the id for Employee #%d: ", i + 1);
		scanf("%d", &employeesArr[i].id);
	}
	return employeesArr;
}

// Solution Function #2
void createEmployeesArray2(Employee **empPtr, int totalElements)
{
	Employee* employeesArr;
	int i;
	employeesArr = (Employee*)malloc(sizeof(Employee) * totalElements);
	for (i = 0; i < totalElements; i++)
	{
		printf("Enter a name for Employee #%d: ", i + 1);
		scanf("%s", &employeesArr[i].name); // &(employeeArr+i)->name

		printf("Enter the age for Employee #%d: ", i + 1);
		scanf("%f", &employeesArr[i].age);
        
		printf("Enter the id for Employee #%d: ", i + 1);
		scanf("%d", &employeesArr[i].id);
	}
	*empPtr = employeesArr;
}

int main()
{
	Employee* ptrArr;
	createEmployeesArray2(&ptrArr, 5);
}

