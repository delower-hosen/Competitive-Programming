#include<bits/stdc++.h>
using namespace std;
struct Edge{
    int u,v;
    double w;
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
double mst(int n){
    sort(e.begin(),e.end());
    //for(int i=0;i<e.size();i++) cout<<e[i].u<<' '<<e[i].v<<' '<<e[i].w<<endl;
    for(int i=0;i<=n;i++)parent[i]=i;
    int cnt=0;
    long double s=0.0;
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
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int i,j,k,l,m,n,tc;
    double dist;
    scanf("%d",&tc);
    while(tc--){
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
    /*cout<<e.size()<<endl;
    for(i=0;i<e.size();i++)cout<<e[i].u<<' '<<e[i].v<<' '<<e[i].w<<endl;*/
       // printf("%lf\n",mst(n));
        printf("%0.2f\n",mst(n));
        if(tc)printf("\n");
        e.clear();
    }
    return 0;
}


