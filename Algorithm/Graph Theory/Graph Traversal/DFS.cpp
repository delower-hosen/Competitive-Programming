#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
bool vis[100005];
void dfs(int source){
    if(vis[source]) return;
    vis[source]=true;
    for(auto u:v[source]){
        dfs(u);
    }
}
int main()
{
    int N,E,x,y,source;
    scanf("%d%d",&N,&E);
    for(int i=0;i<E;i++){
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    scanf("%d",source);
    dfs(source);
    return 0;
}
