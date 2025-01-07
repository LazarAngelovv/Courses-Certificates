#include <stdio.h>
#include <stdlib.h>

//Recive a list
//Count how many nodes are ther in that list
//Return the count 
typedef struct node{
    int data;
    struct node *next;
}Node; 

int countNodesInList(Node * head)
{
    int count = 0;
    Node *temp = head;

    while(temp -> next != NULL)//As long as we have't reached the end of the list 
    {
        count++;
        temp = temp -> next;
    }
    return count;
}

int main()
{
    return 0;
}