#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int number;
    struct tree *leftChild;
    struct tree *rightChild;

} node;
node *root=NULL;

void insertNode(int value)
{
    node *tempNode;
    node *currentNode;
    node *parentNode;

    tempNode = (node *) malloc(sizeof(node));
    tempNode->number = value;
    tempNode->leftChild = NULL;
    tempNode->rightChild = NULL;

    //For the very first call
    if(root==NULL)
    {
        root = tempNode;
    }
    else
    {
        currentNode = root;
        parentNode = NULL;

        while(1)
        {
            parentNode = currentNode;

            if(value <= parentNode->number)
            {
                currentNode = currentNode->leftChild;

                if(currentNode==NULL)
                {
                    parentNode->leftChild = tempNode;
                    return;
                }
            }
            else
            {
                currentNode = currentNode->rightChild;

                if(currentNode==NULL)
                {
                    parentNode->rightChild = tempNode;
                    return;
                }
            }

        }
    }
}


void searchOnTree(int value)
{
    node *currentNode = root;
    bool flag = false;

    while(currentNode!=NULL)
    {
        if(value == currentNode->number)
        {
            flag = true;
            break;
        }
        else if(value<=currentNode->number)
            currentNode = currentNode->leftChild;
        else
            currentNode = currentNode->rightChild;
    }

    if(flag)
        printf("\n%d is found on Tree.\n\n", currentNode->number);
    else
        printf("\n%d is not found on Tree.\n\n", value);
}


int main()
{

    insertNode(45);
    insertNode(54);
    insertNode(40);
    insertNode(49);
    insertNode(38);
    insertNode(70);
    insertNode(30);
    insertNode(39);
    insertNode(41);
    insertNode(45);
    insertNode(44);

    searchOnTree(70);
    searchOnTree(7);

    return 0;
}









