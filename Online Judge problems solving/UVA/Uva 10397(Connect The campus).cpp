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
map<int,int>mark;
int main()
{
    int n,m,l,k,i,j;
    double dist;
    scanf("%d",&n);
    double cx[n+5],cy[n+5];
    for(i=1;i<=n;i++){
        scanf("%lf%lf",&cx[i],&cy[i]);
    }
     for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
           dist=sqrt(((cx[i]-cx[j])*(cx[i]-cx[j]))+((cy[i]-cy[j])*(cy[i]-cy[j])));
           //cout<<i<<' '<<j<<' '<<dist<<endl;
           Edge get;
           get.u=i; get.v=j; get.w=dist;
           e.push_back(get);
        }
    }
    return 0;
}



