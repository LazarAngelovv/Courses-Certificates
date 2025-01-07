#include <stdio.h>
#include <stdlib.h>

// Structure definition for a node in a stack
struct node
{
    int data;
    struct node* next;
};

// Global variable to keep track of the top of the stack
struct node* top;

// Function to push an element onto the stack
void push(int data)
{
    // Create a new node
    struct node *temp = malloc(sizeof(struct node));

    // Assign data to the new node
    if(temp != NULL)
        temp->data = data;

    // Link the new node to the previous top
    temp->next = top;

    // Update the top of the stack
    top = temp;
}

// Function to check if the stack is empty
int isEmpty()
{
    return top == NULL;
}

// Function to pop and print elements from the stack
void pop()
{
    struct node* temp;
    if(top != NULL)
    {
        temp = top;

        // Traverse the stack and print the data of each node
        while(temp != NULL)
        {
            printf("%d:\n", temp->data);
            temp = temp->next;
        }
    }
}

// Function to display the elements in the stack
void display()
{
    struct node* temp;
    if(top != NULL)
    {
        temp = top;

        // Traverse the stack and print the data of each node
        while(temp != NULL)
        {
            printf("%d: \n", temp->data);
            temp = temp->next;
        }
    }
}

int main()
{
    // Push elements onto the stack
    push(1);
    push(2);
    push(3);
    push(4);

    // Display the elements in the stack
    display();

    // Pop elements from the stack
    pop();
    pop();

    // Display the updated stack
    display();

    return 0;
}
