#include<bits/stdc++.h>
using namespace std;
struct node{
    int cnt_trees;
    node *next[28];
    node(){
        cnt_trees=0;
        for(int i=0;i<28;i++)next[i]=NULL;
    }
}*root;

void insert_into_Trie(string str){
    node *cur=root;
    cur->cnt_trees++;
    for(int i=0;str[i];i++){
        int id=str[i]-'a';
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
            cur=cur->next[id];
            cur->cnt_trees++;
    }
}

int search(string str){
    node *cur=root;
    for(int i=0;str[i];i++){
        int id=str[i]-'a';
        if(cur->next[id]==NULL) return 0;
        cur=cur->next[id];
    }
    return cur->cnt_trees;
}

int main()
{
    int n;
    string op,contact;
    scanf("%d",&n);
    root=new node();
    while(n--){
       cin>>op>>contact;
       if(op=="add")insert_into_Trie(contact);
       else if(op=="find"){
        cout<<search(contact)<<endl;
       }
    }
    return 0;
}
