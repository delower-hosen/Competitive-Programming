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
int mst(int n){
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
            if(cnt==n-1)break;
        }
    }
    return s;
}
int main()
{
    int N,E,i,j,k,l,u,v,w;
    scanf("%d%d",&N,&E);
    for(i=0;i<E;i++){
        scanf("%d%d%d",&u,&v,&w);
        Edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    cout<<mst(N)<<endl;;
    return 0;
}
/*
7 8
1 2 3
1 5 5
2 5 6
2 3 5
5 6 2
3 6 3
3 4 9
6 4 7
*/
