#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int level[100005],parent[100005];
bool visited[100005];
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
               parent[v[x][i]]=x;
               q.push(v[x][i]);
            }
        }
    }

}
int main()
{
    int x,y,node,edge,source,des;
    vector<int>path;
    cin>>node>>edge;
    for(int i=0;i<edge;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    cin>>source>>des;
    bfs(source);
    for(int i=0;i<node;i++)cout<<"Level of "<<i<<" ="<<level[i]<<endl;

    cout<<"The path from source to destination is:"<<endl;
    int w = des;
    while(true){
        path.push_back(w);
        w=parent[w];
        if(parent[w]==source){path.push_back(w); break;}
    }
    path.push_back(source);
    reverse(path.begin(),path.end());
    for(int i=0;i<path.size();i++) cout<<path[i]<<" ";
    cout<<endl;
    return 0;
}

