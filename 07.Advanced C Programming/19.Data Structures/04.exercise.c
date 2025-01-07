#include <stdio.h>
#include <stdlib.h>

#define MAX 50

// Function prototypes
void enqueue();
void dequeue();
void display();

// Global variables
int queue_array[MAX];
int rear = -1;
int front = -1;

int main()
{
    int choice;

    // Main menu loop
    while(1)
    {
        printf("1. Insert element to queue\n");
        printf("2. Delete element from queue\n");
        printf("3. Display all elements of queue\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process user's choice
        switch(choice)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(1);

            default:
                printf("Wrong choice\n");
        }
    }
}

// Function to insert an element into the queue
void enqueue()
{
    int add_item;

    // Check for queue overflow
    if(rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        // If the queue is initially empty, set the front to 0
        if(front == -1)
            front = 0;

        printf("Insert the element in the queue: ");
        scanf("%d", &add_item);

        rear = rear + 1;
        queue_array[rear] = add_item;
    }
}

// Function to delete an element from the queue
void dequeue()
{
    // Check for queue underflow
    if(front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }
    else
    {
        printf("Element deleted from the queue is: %d\n", queue_array[front]);
        front = front + 1;
    }
}

// Function to display all elements in the queue
void display()
{
    int i;

    // Check if the queue is empty
    if(front == -1)
        printf("Queue is empty\n");
    else
    {
        printf("Queue is: ");
        for(i = front; i <= rear; i++)
            printf("%d ", queue_array[i]);
        printf("\n");
    }
}
