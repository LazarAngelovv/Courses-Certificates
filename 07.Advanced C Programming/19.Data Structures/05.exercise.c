#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structure definition for a tree node
struct treeNode
{
    int data;
    struct treeNode* leftPtr;
    struct treeNode* rightPtr;
};

typedef struct treeNode TreeNode;
typedef TreeNode *TreeNodePtr;

// Function prototypes
void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

int main()
{
    int i = 0;
    int item = 0;
    TreeNodePtr rootPtr = NULL;

    // Seed the random number generator
    srand(time(NULL));

    printf("The numbers being placed in the tree are:\n");

    // Generate random numbers and insert them into the tree
    for(i = 1; i <= 10; i++)
    {
        item = rand() % 15;
        printf("%3d", item);
        insertNode(&rootPtr, item);
    }

    printf("\n\nThe preOrder traversal is:\n");
    preOrder(rootPtr);

    printf("\n\nThe inOrder traversal is:");
    inOrder(rootPtr);

    printf("\n\nThe postOrder traversal is:");
    postOrder(rootPtr);

    return 0;
}

// Function to insert a node into the binary tree
void insertNode(TreeNodePtr *treePtr, int value)
{
    // If the tree is empty, create a new node
    if(*treePtr == NULL)
    {
        *treePtr = malloc(sizeof(TreeNode));

        if(*treePtr != NULL)
        {
            (*treePtr)->data = value;
            (*treePtr)->leftPtr = NULL;
            (*treePtr)->rightPtr = NULL;
        }
        else
        {
            printf("%d not inserted. No memory available.\n", value);
        }
    }
    // If the value is less than the current node, go to the left subtree
    else if (value < (*treePtr)->data)
    {
        insertNode(&((*treePtr)->leftPtr), value);
    }
    // If the value is greater than the current node, go to the right subtree
    else if (value > (*treePtr)->data)
    {
        insertNode(&((*treePtr)->rightPtr), value);
    }
    // If the value is already present in the tree, it's a duplicate
    else
    {
        printf("Duplicate value: %d\n", value);
    }
}

// Function to perform in-order traversal of the binary tree
void inOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL)
    {
        inOrder(treePtr->leftPtr);
        printf("%3d",treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}

// Function to perform pre-order traversal of the binary tree
void preOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL)
    {
        printf("%3d", treePtr->data);
        preOrder(treePtr->leftPtr);
        preOrder(treePtr->rightPtr);
    }
}

// Function to perform post-order traversal of the binary tree
void postOrder(TreeNodePtr treePtr)
{
    if(treePtr != NULL)
    {
        postOrder(treePtr->leftPtr);
        postOrder(treePtr->rightPtr);
        printf("%3d",treePtr->data);
    }
}
