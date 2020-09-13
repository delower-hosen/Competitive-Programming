#include<bits/stdc++.h>
using namespace std;
struct tree{
    int number;
    struct tree *leftChild;
    struct tree *rightChild;
};
typedef tree node;
node *root = NULL;

void insertNode(int value){
    node *tempNode,*parentNode,*currentNode;
    tempNode = (node *)malloc(sizeof(node));
    tempNode->number = value;
    tempNode->leftChild = NULL;
    tempNode->rightChild = NULL;
    if(root==NULL){
        root = tempNode;
    }
    else{
        currentNode = root;
        parentNode = NULL;
        while(true){
            parentNode = currentNode;
            if(value<=parentNode->number){
                currentNode=currentNode->leftChild;
                if(currentNode==NULL){
                    parentNode->leftChild=tempNode;
                    return;
                }
            }
            else{
               currentNode=currentNode->rightChild;
               if(currentNode==NULL){
                parentNode->rightChild=tempNode;
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

void preOrder(node *rootNode){
    if(rootNode==NULL) return;
    printf("%d ",rootNode->number);
    preOrder(rootNode->leftChild);
    preOrder(rootNode->rightChild);
}

void inOrder(node *rootNode){
    if(rootNode==NULL) return;
    preOrder(rootNode->leftChild);
    printf("%d ",rootNode->number);
    preOrder(rootNode->rightChild);
}

void postOrder(node *rootNode){
    if(rootNode==NULL) return;
    preOrder(rootNode->leftChild);
    preOrder(rootNode->rightChild);
    printf("%d ",rootNode->number);
}

node *findMinValue(node *root){
    if(root == NULL) return root;
    while(root->leftChild!=NULL){
        root=root->leftChild;
    }
    return root;
}

node *findMaxValue(node *root){
    if(root == NULL) return root;
    while(root->rightChild!=NULL){
        root=root->rightChild;
    }
    return root;
}

node *deleteNode(node *currentNode,int value){
    if(currentNode == NULL) return NULL; //empty tree
    else if(value<currentNode->number) currentNode->leftChild = deleteNode(currentNode->leftChild,value);
    else if(value>currentNode->number) currentNode->rightChild = deleteNode(currentNode->rightChild,value);
    else{
        if(currentNode->leftChild==NULL && currentNode->rightChild==NULL) currentNode = NULL;
        else if(currentNode->leftChild==NULL) currentNode=currentNode->rightChild;
        else if(currentNode->rightChild==NULL) currentNode=currentNode->leftChild;
        else{
            node *tempNode = findMinValue(currentNode->rightChild);
            currentNode->number=tempNode->number;
            currentNode->rightChild=deleteNode(currentNode->rightChild,tempNode->number);
        }
    }
    return currentNode;

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
    printf("\n\nPreOrder Traverse:\n");
    preOrder(root);
    printf("\n\nInOrder Traverse:\n");
    inOrder(root);
    printf("\n\nPostOrder Traverse:\n");
    postOrder(root);
    printf("\n");

    printf("\n\nMin value on Tree:\n");
    node *temp = findMinValue(root);
    printf("%d\n",temp->number);

     printf("\n\nMax value on Tree:\n");
    temp = findMaxValue(root);
    printf("%d\n",temp->number);

    root = deleteNode(root,44);
    printf("\n\nPreOrder Traverse:\n");
    preOrder(root);
    printf("\n");

    return 0;
}
