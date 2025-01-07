#include <stdio.h>
#include <stdlib.h>

typedef struct point
{
    int x;
    int y;
}Point;

typedef struct emplyee
{
    char name[10];
    float age;
    int id;
}Employee;

int equalPoints(Point p1, Point p2)
{
    if(p1.x == p2.x && p1.y == p2.y)
        return 1;
    else
        return 0;
}

int notEqualPoints(Point p1, Point p2)
{
    if(p1.x != p2.x || p1.y != p2.y)
        return 1;
    else
        return 0;
}

int equalByAge(Employee e1, Employee e2)
{
    if(e1.age == e2.age)
        return 0;
    else if(e1.age < e2.age)
        return -1;
    else    
        return 1;
}

int compareByAge(Employee e1, Employee e2)
{
     if(e1.age == e2.age)
        return 0;
    else if(e1.age < e2.age)
        return -1;
    else    
        return 1;
}

int compareById(Employee e1, Employee e2)
{
     if(e1.id == e2.id)
        return 0;
    else if(e1.id < e2.id)
        return -1;
    else    
        return 1;
}

int main()
{
    Point p1 = { 1, 2};
    Point p2 = { 4, 1};

    if(equalPoints(point1, point2) != 0)

    return 0;
}