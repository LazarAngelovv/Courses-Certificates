#include <stdio.h>
#include <stdlib.h>

// Structure definition for a node in a queue
struct QNode
{
    int key;
    struct QNode* next;
};

// Structure definition for the queue
struct Queue
{
    struct QNode *front, *rear;
};

// Function to create a new node with the given key
struct QNode* newNode(int k)
{
    struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
}

// Function to create a new empty queue
struct Queue* createQueue()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

// Function to add an element to the rear of the queue
void enQueue(struct Queue* q, int k)
{
    struct QNode* temp = newNode(k);

    // If the queue is empty, make the new node as both front and rear
    if(q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }

    // Otherwise, add the new node at the end of the queue
    q->rear->next = temp;
    q->rear = temp;
}

// Function to remove an element from the front of the queue
struct QNode* deQueue(struct Queue* q)
{
    // If the queue is empty, return NULL
    if(q->front == NULL)
        return NULL;

    // Store the front node and move the front pointer to the next node
    struct QNode* temp = q->front;
    q->front = q->front->next;

    // If the front becomes NULL, update the rear to NULL as well (empty queue)
    if(q->front == NULL)
        q->rear = NULL;

    return temp;
}

int main()
{
    // Create a new queue
    struct Queue* q = createQueue();

    // Enqueue some elements into the queue
    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);
    enQueue(q, 4);
    enQueue(q, 5);

    // Dequeue an element from the queue
    struct QNode* n = deQueue(q);
    if(n != NULL)
        printf("Dequeued item is %d", n->key);

    return 0;
}
