#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int level[100];
bool visited[1000];
void bfs(int source){
    queue<int>q;
    q.push(source);
    level[source]=0;
    visited[source]=true;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<v[x].size();i++){
            if(!visited[v[x][i]]){
               visited[v[x][i]]=true;
               level[v[x][i]]=level[x]+1;
               q.push(v[x][i]);
            }
        }
    }

}
int main()
{
    int x,y,node,edge,source;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin>>source;
    bfs(source);
    for(int i=0;i<node;i++)cout<<"Level of "<<i<<" ="<<level[i]<<endl;
    return 0;
}
