#include<bits/stdc++.h>
using namespace std;
int level[100005];
bool vis[100005];
vector<int>v[100];

void BFS(int source){
    queue<int>q;
    q.push(source);
    level[source]=0;
    vis[source]=true;

    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        for(auto u:v[tmp]){
            if(vis[u]) continue;
            level[u]=level[tmp]+1;
            vis[u]=true;
            q.push(u);
        }
    }
}
int main()
{
    int N,E,source,x,y,destination;
    scanf("%d%d",&N,&E);
    for(int i=1;i<=E;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    scanf("%d",&source);
    BFS(source);
    for(int i=1;i<=N;i++){
        printf("level of %d=%d\n",i,level[i]);
    }
    return 0;
}
