#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Recive a Linked List and some 'int' number
//Go trough ll the nodes of the list
//Return "true" if this number exists in the list
//Otherwise if it doesn't exist - we should return "false"
typedef struct node{
    int data;
    struct node *next;
}Node; 

bool is NumberInList(Node *head, int num)
{

    Node * cur_node = head;
    while(cur_node->next != NULL)//While we have additional nodes to explore
    {
        if(cur_node -> data == num)
        {
            return true;
        }
        cur_node = cur_node -> next;
    }
    return false;
}

int main()
{
    return 0;
}