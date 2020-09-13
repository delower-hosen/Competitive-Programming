#include<bits/stdc++.h>
using namespace std;
map<char,vector<char> >mp;
map<char,bool>vis;
map<char,char>parent;
void bfs(char s){
    queue<char>q;
    q.push(s);
    vis[s]=true;
    while(!q.empty()){
        char tmp=q.front();
        q.pop();
        for(auto u:mp[tmp]){
            if(vis[u]) continue;
            vis[u]=true;
            parent[u]=tmp;
            q.push(u);
        }
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,m,q,i,j,k,tc;
    string str1,str2,s,t;
    cin>>tc;
    while(tc--){
    mp.clear();
    cin>>n>>q;
    for(i=0;i<n;i++){
        cin>>str1>>str2;
        mp[str1[0]].push_back(str2[0]);
        mp[str2[0]].push_back(str1[0]);
    }
    for(i=0;i<q;i++){
    vis.clear();
    parent.clear();
    cin>>s>>t;
    bfs(s[0]);
    vector<char>path;
    path.clear();
    char w=t[0];
    while(true){
        if(parent[w]==s[0]){path.push_back(w);break;}
        path.push_back(w);
        w=parent[w];
    }
    path.push_back(s[0]);
    reverse(path.begin(),path.end());
    for(auto u:path){
        cout<<u;
    }
    cout<<endl;
    }
    if(tc)cout<<endl;
    }
    return 0;
}

/*
7
Rome Turin
Turin Venice
Turin Genoa
Rome Pisa
Pisa Florence
Venice Athens
Turin Milan
Milan Florence
*/

