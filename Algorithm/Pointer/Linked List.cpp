#include<bits/stdc++.h>
using namespace std;
struct Node{
    int roll;
    Node *next;
};
Node *root=NULL;

void append(int roll){
    if(root==NULL){
        root=new Node();
        root->roll=roll;
        root->next=NULL;
    }
    else{
        Node *current_node=root;
        while(current_node->next!=NULL){
            current_node=current_node->next;
        }
        Node *newnode=new Node();
        newnode->roll=roll;
        newnode->next=NULL;
        current_node->next=newnode;
    }
}
void print(){
    Node *current_node=root;
    while(current_node!=NULL){
        printf("%d ",current_node->roll);
        current_node=current_node->next;
    }
}
void delete_node(int roll){
    Node *previous_Node=NULL;
    Node *current_node=root;
    while(current_node->roll!=roll){
        previous_Node=current_node;
        current_node=current_node->next;
    }
    if(current_node==root){
        Node *tmp=root;
        root=root->next;
        delete(tmp);
    }
    else{
        previous_Node->next=current_node->next;
        delete(current_node);
    }
}
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a);
        append(a);
    }
    print();
    printf("\nEnter a node to delete\n");
    scanf("%d",&a);
    delete_node(a);
    printf("After deleting the LIST is:\n");
    print();
    return 0;
}
