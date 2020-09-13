
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
    int N,E,x,y,source,cnt=0;
    set<int>st;
    scanf("%d%d",&N,&E);
    for(int i=0;i<E;i++){
        scanf("%d%d",&x,&y);
        v[x].push_back(y);
        v[y].push_back(x);
        st.insert(x);
        st.insert(y);
    }
    scanf("%d",&source);
    dfs(source);
    for(int i=1;i<=N;i++){
        if(!vis[i])cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
