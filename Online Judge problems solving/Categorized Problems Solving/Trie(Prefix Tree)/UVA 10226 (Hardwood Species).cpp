#include<bits/stdc++.h>
using namespace std;
int total;
struct node{
    int cnt_trees;
    node *next[128];
    node(){
        cnt_trees=0;
        for(int i=0;i<128;i++) next[i]=NULL;
    }
}*root;

void insert_into_Trie(char* str){
    node *cur=root;
    for(int i=0;str[i];i++){
        int id=str[i];
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
            cur=cur->next[id];
    }
    cur->cnt_trees++;
}

void printTree(node *cur,vector<char>name){
    if(cur->cnt_trees){
        for(auto x:name){
            printf("%c",x);
        }
        cout<<' '<<setprecision(4)<<fixed<<(100.0*(double)(cur->cnt_trees))/(double)(total)<<endl;
    }


    for(int i=0;i<128;i++){
        if(cur->next[i]!=NULL){
            name.push_back(i);
            printTree(cur->next[i],name);
            name.pop_back();
        }
    }
    name.pop_back();
}

void del(node* cur)
{
    for(int i= 0;i<128;i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete(cur);
}

int main()
{
    int n,q,tc;
    char str[21];
    scanf("%d\n\n",&n);
    tc=n;
    while(n--){
      root=new node();
      total=0;
      while(gets(str)){
        if(strlen(str)==0)break;
        insert_into_Trie(str);
        total++;
      }
      vector<char>name;
      printTree(root,name);
      if(--tc)printf("\n");
      del(root);
    }
    return 0;
}
