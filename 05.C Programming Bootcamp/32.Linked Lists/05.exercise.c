#include <stdio.h>
#include <stdlib.h>

//Recive a Linked List and some "int" number
//Return the number of occurencews of this "int" number in the list
typedef struct node{
    int data;
    struct node *next;
}Node; 

int totalNumberAppearancesInList(Node *head, int num)
{
    int count = 0;
    Node *temp = head;

    while(temp -> !=NULL)
    {
        if(temp->data == num)//Found a corresponding node
        {
            count++;
        }
        temp = temp->next;
    }
    return count;
}

int main()
{
    return 0;
}
