//Verdict: Runtime Error

#include<bits/stdc++.h>
using namespace std;
struct node{
    int cnt_trees;
    bool endmark;
    node *next[128];
    node(){
        endmark=false;
        cnt_trees=0;
        for(int i=0;i<128;i++) next[i]=NULL;
    }
}*root;

void insert_into_Trie(string str){
    node *cur=root;
    for(int i=0;str[i];i++){
        int id=str[i];
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
            cur=cur->next[id];
    }
    cur->cnt_trees++;
}

int search_into_Trie(string str){
    node *cur=root;
    for(int i=0;str[i];i++){
        int id=str[i];

        cur=cur->next[id];
    }
    return cur->cnt_trees;
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

    int tc,n,q,cs=0;
    string str;
    cin>>tc;
    while(tc--){
    root=new node;
    cin>>n;
    while(n--){
        cin>>str;
        if(str.length()>3)
        sort(str.begin()+1,str.end()-1);
        insert_into_Trie(str);
    }
    cin>>q;
    cout<<"Case "<<++cs<<":"<<endl;
    getchar();
    while(q--){
        getline(cin,str);
        int ans=1;
        string temp="";
        for(int i=0;str[i];++i){
            if(str[i]==' '){
                if(temp.length()>3)
                sort(temp.begin()+1,temp.end()-1);
                //cout<<temp<<endl;
                ans*=search_into_Trie(temp);
                temp="";
            }
            else temp+=str[i];
        }
        if(temp.length()>3)
        sort(temp.begin()+1,temp.end()-1);
        //cout<<temp<<endl;
        ans*=search_into_Trie(temp);
        cout<<ans<<endl;
    }
    del(root);
    }
    return 0;
}
