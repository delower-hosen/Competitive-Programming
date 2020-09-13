#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
struct Edge{
    int u,v,w;
     bool operator<(const Edge& p) const
    {
        return w < p.w;
    }
};
vector<Edge>sTree;
int parent[1005];
int find(int r)
{
    if(parent[r] == r) return r;
    else return find(parent[r]);
}
int mst(int n,vector<Edge> e){
    sort(e.begin(),e.end());
    memset(parent,0,sizeof(parent));
    for(int i=0;i<=n;i++)parent[i]=i;
    int cnt=0,s=0;
    for(int i=0;i<(int)e.size();i++){
        int u=find(e[i].u);
        int v=find(e[i].v);
        if(u!=v){
            parent[u]=v;
            cnt++;
            s+=e[i].w;
            Edge get;
            get.u=e[i].u;
            get.v=e[i].v;
            get.w=e[i].w;
            sTree.push_back(get);
            if(cnt==n-1)break;
        }
    }
    return s;
}
int main()
{
    int N,E,i,j,k,l,u,v,w,tc;
    scanf("%d",&tc);
    while(tc--){
    vector<Edge>e;
    scanf("%d%d",&N,&E);
    for(i=0;i<E;i++){
        scanf("%d%d%d",&u,&v,&w);
        Edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    printf("%d ",mst(N,e));
    int sz=sTree.size();
    int mn=inf;
    for(i=0;i<sz;i++){
        vector<Edge>tmp=e;
        int x=sTree[i].u; int y=sTree[i].v; int z=sTree[i].w;
        for(j=0;j<E;j++){
            int a=tmp[j].u;int b=tmp[j].v;
            if((x==a&&y==b)||(x==b&&y==a))tmp[j].w=inf;
        }
        memset(parent,0,sizeof(parent));
        int gg=mst(N,tmp);
        mn=min(mn,gg);
    }
    printf("%d\n",mn);
   sTree.clear();
    }
    return 0;
}
