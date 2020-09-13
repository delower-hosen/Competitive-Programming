#include<bits/stdc++.h>
using namespace std;

struct node{
    int roll;
    node *next;
};
node *root = NULL;

void insertIntoList(int roll){
    if(root==NULL){
        root= new node();
        root->roll=roll;
        root->next=NULL;
    }
    else{
        node *current_node = root;
        while(current_node->next!=NULL){
            current_node=current_node->next;
        }
        //node *newnode = new node(); in C++
        node *newnode;
        newnode = (node *) malloc(sizeof(node)); //in C
        newnode->roll=roll;
        newnode->next=NULL;
        current_node->next=newnode;
    }
}

void deleteFromList(int roll){
    node *current_node = root;
    node *previous_node = NULL;
    while(current_node->roll!=roll){
        previous_node = current_node;
        current_node = current_node->next;
    }
    if(current_node==root){
        node *temp = root;
        root = root->next;
        delete(temp);
    }
    else{
        previous_node->next = current_node->next;
        delete(current_node);
    }
}

void printList(){
    node *current_node=root;
    while(current_node!=NULL){
        printf("%d ",current_node->roll);
        current_node= current_node->next;
    }
    printf("\n");
}
int main()
{
    insertIntoList(4);
    insertIntoList(2);
    insertIntoList(10);
    printList();
    deleteFromList(2);
    printList();
    return 0;
}
