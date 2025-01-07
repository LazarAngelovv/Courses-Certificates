#include <stdio.h>
#include <stdlib.h>

//Create a linked list
//Create a new list
//Recive numbers as input from the user
//Every recived number should be added to the end of the list
//The "stopping condition" would be when number is "-1"
//Return the new list
typedef struct node{
    int data;
    struct node *next;
}Node; 

Node * createListsOfNumber()
{
    Node *head;
    Node *curr_node;
    int num;

    printf("Please enter a number or '-1' to finish\n");
    scanf("%d", &num);

    if(num == -1)
        return NULL;
    
    head = (Node*)malloc(sizeof(Node));
    curr_node = head;
    curr_node -> data = num;

    printf("Please enter a number or '-1' to finish\n");
    scanf("%d", &num);

    while(num != -1)
    {
        curr_node -> next = (Node*)malloc(sizeof(Node));
        curr_node = curr_node -> next;
        curr_node -> data = num;
    
        printf("Please enter a number or '-1' to finish\n");
        scanf("%d", &num);
    }
}
int main()
{
    return 0;
}