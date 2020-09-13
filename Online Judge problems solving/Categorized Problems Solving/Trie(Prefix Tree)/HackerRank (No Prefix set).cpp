#include<bits/stdc++.h>
using namespace std;
struct node{
    bool endmark;
    int cnt_trees;
    node *next[11];
    node(){
        endmark=false;
        cnt_trees=0;
        for(int i=0;i<11;i++) next[i]=NULL;
    }
}*root;

bool insert_into_Trie(string str){
    node *cur=root;
    for(int i=0;str[i];i++){
        int id=str[i]-'a';
        if(i==(str.size())-1 && cur->next[id]!=NULL ) return false;
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
            cur=cur->next[id];
            if(cur->endmark) return false;
    }
    cur->endmark=true;
    return true;
}

int main()
{
    int n,f=1;
    string str,bad;
    bool ok=true;
    cin>>n;
    root=new node();
    while(n--){
        cin>>str;
        if(!ok) continue;
        ok=insert_into_Trie(str);
        if(!ok) bad=str;
    }
    if(ok) cout<<"GOOD SET\n";
    else cout<<"BAD SET\n"<<bad<<endl;
    return 0;
}
