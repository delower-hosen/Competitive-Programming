#include<bits/stdc++.h>
using namespace std;
map<char,int>mark;
struct node{
    int cnt_trees;
    bool end_mark;
    node *next[4];
    node(){
        cnt_trees=0;
        end_mark=false;
        for(int i=0;i<4;i++) next[i]=NULL;
    }
}*root;

void insert_into_Trie(string str,map<char,int> mark){
    node *cur=root;
    for(int i=0;str[i];i++){
        char ch=str[i];
        int id=mark[ch];
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
            cur=cur->next[id];
            cur->cnt_trees++;
    }
}

int search_into_Trie(string str,map<char,int> mark){
    node *cur=root;
    int mx=-1;
    for(int i=0;str[i];i++){
        char ch=str[i];
        int id=mark[ch];

        cur=cur->next[id];
        int koita_ache=cur->cnt_trees;
        int len=i+1;
        int lo_max=koita_ache*len;
        //cout<<lo_max<<endl;
        if(mx<lo_max) mx=lo_max;
    }
    return mx;
}


void del(node* cur)
{
    for(int i= 0;i<4;i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete(cur);
}

int main()
{
    mark['A']=0;mark['C']=1;mark['G']=2;mark['T']=3;
    int tc,n,q,cs=0;
    string str;
        cin>>tc;
        while(tc--){
        root=new node();
        cin>>n;
        vector<string>v;
        while(n--){
            cin>>str;
            insert_into_Trie(str,mark);
            v.push_back(str);
        }
        int local_max=-1;
        for(int i=0;i<v.size();i++){
            int ck_max=search_into_Trie(v[i],mark);
            if(ck_max>local_max) local_max=ck_max;
        }
        cout<<"Case "<<++cs<<": ";
        cout<<local_max<<endl;
        del(root);
        }
    return 0;
}
