#include<bits/stdc++.h>
using namespace std;
struct node
{
    int cnt_trees;
    bool endmark;
    node *next[26];
    node()
    {
        cnt_trees=0;
        endmark=false;
        for(int i=0; i<26; i++) next[i]=NULL;
    }
}*root;

void insert_into_Trie(char* str,int len)
{
    node *cur=root;
    for(int i=0; i<len; i++)
    {
        int id=str[i]-'a';
        if(cur->next[id]==NULL)
            cur->next[id]=new node();
        cur=cur->next[id];
    }
    cur->endmark=true;
}

node* search_into_Trie(char* str,int len)
{
    node *cur=root;
    for(int i=0; i<len; i++)
    {
        int id=str[i]-'a';
        if(cur->next[id]==NULL) return NULL;
        cur=cur->next[id];
    }
    return cur;
}

void lexicograpPrint(node *cur,char* prefix,vector<char>print_word)
{

    if(cur->endmark and print_word.size()!=0)
    {
        printf("%s",prefix);
        for(auto x:print_word) printf("%c",x);
        printf("\n");
    }

    for(int i=0; i<26; i++)
    {
        if(cur->next[i]!=NULL)
        {
            print_word.push_back(i+'a');  //push converting integer int character
            lexicograpPrint(cur->next[i],prefix,print_word);
            print_word.pop_back();
        }
    }
    print_word.pop_back();
}

int main()
{

    int n,q;
    char str[21];
    root=new node();
    scanf("%d",&n);
    while(n--)
    {
        scanf(" %s",str);
        insert_into_Trie(str,strlen(str));
    }
    scanf("%d",&q);
    int tc=0;
    while(q--)
    {
        scanf(" %s",str);
        cout<<"Case #"<<++tc<<":"<<endl;
        bool childrenThere=false;
        node *temp=search_into_Trie(str,strlen(str));
        if(temp!=NULL)             //that means the whole prefix remains in the Trie
        {
            for(int i=0; i<26; i++)
            {
                if(temp->next[i]!=NULL)
                {
                    childrenThere=true;    //prefix has children.so needed to print
                    break;
                }
            }
            if(childrenThere)
            {
                vector<char>print_word;
                lexicograpPrint(temp,str,print_word);   //printing Trie Lexicographically
            }
            else cout<<"No match."<<endl;
        }
        else cout<<"No match."<<endl;
    }
    return 0;
}
