#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
};

struct Node* createNode(int data)
{
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

void insertNode(struct Node** head, int data)
{
    struct Node* newNode = createNode(data);
    struct Node* current = *head;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
    newNode->prev = current;
}

void deleteNode(struct Node** head, int data)
{
    struct Node* current = *head;

    while(current != NULL)
    {
        if(current->data == data)
        {
            if(current->prev != NULL)
            {
                current->prev->next = current->next;
            }
            else
            {
                *head = current->next;
            }
            
            if(current->next != NULL)
            {
                current->next->prev = current->prev;
            }
            free(current);
            return;
        }
        current = current->next;
    }
}

void printList(struct Node* head)
{
    struct Node* current = head;
    while(current != NULL)
    {
        printf("%d", current->data);
        current = current->next;
    }
    printf("\n");
}

int main()
{
    struct Node* head = NULL;

    insertNode(&head, 3);
    insertNode(&head, 2);
    insertNode(&head, 1);

    printf("Doubly Linked List before deletion: ");
    printList(head);

    int valueToDelete = 1;
    deleteNode(&head, valueToDelete);
    
    printf("Doubly Linked List after deletion of %d: ",valueToDelete);
    printList(head);

    return 0;
}