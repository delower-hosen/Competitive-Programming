#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int edge_id[100];
bool visited[1000];

void dfs(int startNode,int n){
    for(int i=0;i<n;i++)edge_id[i]=visited[i]=0;
    stack<int>S;
    S.push(startNode);
    while(true){
        int u=S.top();
        S.pop();
        while(edge_id[u]<adj[u].size()){
            int v = adj[u][edge_id[u]];
            edge_id[u]++;
            if(!visited[v]){
                visited[v]=true;
                S.push(u);
                S.push(v);
                break;
            }
        }
    }
}
int main()
{
    int node,edge,x,y,startNode;
    scanf("%d%d",&node,&edge);
    for(int i=1;i<=edge;i++){
        scanf("%d%d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    scanf("%d",&startNode);
    dfs(startNode,node);
    return 0;
}
