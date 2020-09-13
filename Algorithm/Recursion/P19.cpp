#include<bits/stdc++.h>
using namespace std;
void preorder(int n){
    if(n==1 or n==2){
        printf(" %d",n);
        return;
    }
    printf(" %d",n);
    preorder(n-2);
    preorder(n-1);
}
void inorder(int n){
    if(n==1 or n==2){
        printf(" %d",n);
        return;
    }
    inorder(n-2);
    printf(" %d",n);
    inorder(n-1);
}
void postorder(int n){
    if(n==1 or n==2){
        printf(" %d",n);
        return;
    }
    postorder(n-2);
    postorder(n-1);
    printf(" %d",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("Preorder: ");  //printing sequence root->left->right
    preorder(n);
    printf("\nInorder: "); //printing sequence left->root->right
    inorder(n);
    printf("\nPostorder: ");  //printing sequence left->right->root
    postorder(n);
    printf("\n");
    return 0;
}
