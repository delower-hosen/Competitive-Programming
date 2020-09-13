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
    int N,E,i,j,k,l,u,v,w,M,K,original,T=0;
    while(scanf("%d",&N)!=EOF){
    original=0;
    for(i=0;i<N-1;i++){
        scanf("%d%d%d",&u,&v,&w);
        original+=w;
    }
    scanf("%d",&K);
    for(i=0;i<K;i++){
        scanf("%d%d%d",&u,&v,&w);
        Edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    scanf("%d",&M);
    for(i=0;i<M;i++){
        scanf("%d%d%d",&u,&v,&w);
        Edge get;
        get.u=u;
        get.v=v;
        get.w=w;
        e.push_back(get);
    }
    if(T!=0)printf("\n");
    printf("%d\n",original);
    printf("%d\n",mst(N));
    e.clear();
    T++;
    }
    return 0;
}
