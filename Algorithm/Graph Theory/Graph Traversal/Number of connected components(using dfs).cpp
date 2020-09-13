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
    int N,E,x,y,source,connectedComponents=0,i;
    scanf("%d%d",&N,&E);
    for(i=1;i<=E;i++){
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(i=1;i<=N;i++){
        if(!vis[i]){
            dfs(i);
            connectedComponents++;
        }
    }
    printf("Number of connected components=%d\n",connectedComponents);
    return 0;
}

