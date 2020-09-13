#include<bits/stdc++.h>
using namespace std;
struct Edge{
    int u,v,w;
     bool operator<(const Edge& p) const
    {
        return w < p.w;
    }
};
vector<Edge>e;
int parent[100005];
int find(int r)
{
    if(parent[r] == r) return r;
    else return find(parent[r]);
}
int mst(int n,int fixed){
    sort(e.begin(),e.end());
    for(int i=0;i<=n;i++)parent[i]=i;
    int cnt=0,s=0;
    for(int i=0;i<(int)e.size();i++){
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
            parent[u]=v;
            cnt++;
            s+=e[i].w;
            if(cnt==n-1-fixed)break;
        }
    }
    return s;
}
map<int,int>mark;
int main()
{
    int N,E,i,j,k,l,u,v,w,fixed,fixed_cost=0;
    scanf("%d%d%d",&N,&E,&fixed);
    for(i=0;i<fixed;i++){
        scanf("%d%d%d",&u,&v,&w);
        fixed_cost+=w;
        mark[u]=v;
        mark[v]=u;
    }
    for(i=0;i<E;i++){
        scanf("%d%d%d",&u,&v,&w);
        if(mark[u]==v or mark[v]==u)continue;
        Edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    cout<<mst(N,fixed)+fixed_cost<<endl;;
    return 0;
}
/*
4 4 1
1 2 25
1 2 25
1 4 10
4 3 17
3 2 13
*/

