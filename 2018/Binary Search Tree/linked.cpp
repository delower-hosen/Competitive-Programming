#include<bits/stdc++.h>
using namespace std;
struct Node{
    int roll;
    Node *next;
};
Node *root;

void Insert(int roll){
    if(root==NULL){
        //root = new Node();
        root = (Node *)malloc(sizeof(Node));
        root->roll=roll;
        root->next=NULL;
    }
    else{
        Node *current_node = root;
        while(current_node->next!=NULL){
            current_node=current_node->next;
        }
        //Node *temp = new Node();
        Node *temp = (Node *)malloc(sizeof(Node));
        temp->roll = roll;
        temp->next = NULL;
        current_node->next=temp;
    }
}

void Delete(int roll){
    if(root->roll==roll){
        Node *temp = root;
       root=root->next;
       delete(temp);
    }
    else{
        Node *current_node = root;
        Node *previous_node = NULL;
        while(current_node->roll!=roll){
            previous_node = current_node;
            current_node = current_node->next;
        }
        previous_node->next = current_node->next;
        delete(current_node);
    }
}

void printList(){
    Node *current_node=root;
    while(current_node!=NULL){
        printf("%d ",current_node->roll);
        current_node= current_node->next;
    }
    printf("\n");
}

int main()
{
    Insert(6);
    Insert(4);
    Insert(12);
    printList();
    Delete(4);
    printList();
    return 0;
}
