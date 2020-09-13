#include<bits/stdc++.h>
using namespace std;
struct node{
    int cnt_trees;
    node *next[10];
    node(){
        cnt_trees=0;
        for(int i=0;i<10;i++)next[i]=NULL;
    }
}*root;

void insert_into_Trie(string str){
    node *cur=root;
    for(int i=0;str[i];i++){
        int id=str[i]-'0';
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
            cur=cur->next[id];
    }
    cur->cnt_trees++;
    //cout<<cur->cnt_trees<<endl;
}

bool search(string str){
    node *cur=root;
    for(int i=0;str[i];i++){
        int id=str[i]-'0';
        cur=cur->next[id];
    }
    if(cur->cnt_trees>1) return true;   //inconsistent
    for(int i=0;i<10;i++){
        if(cur->next[i]!=NULL) return true; //inconsistent
    }
    return false;  //not yet inconsistent
}

void del(node* cur)
{
    for(int i= 0;i<10;i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete(cur);
}

int main()
{
    int tc,cs=0;
    string str;
    scanf("%d",&tc);
    while(tc--){
        root=new node();
        int n,f=1;
        scanf("%d",&n);
        vector<string>v;
        getchar();
        while(n--){
            cin>>str;
            insert_into_Trie(str);
            v.push_back(str);
        }
        cout<<"Case "<<++cs<<": ";
        for(int i=0;i<v.size();i++){
            if(search(v[i])){
                cout<<"NO"<<endl;f=0;break;
            }
        }
        if(f) cout<<"YES"<<endl;
        del(root);
    }
    return 0;
}
