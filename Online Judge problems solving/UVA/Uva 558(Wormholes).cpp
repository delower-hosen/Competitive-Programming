#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll dist[100005];
#define inf 0x3f3f3f3f
struct T{
    ll u,v,w;
}graph[100005];

void BellmanFord(ll s,ll N,ll E){
    int i,j;
    for(i=0;i<=N;i++)dist[i]=inf;
    dist[s]=0;
    for(i=0;i<N-1;i++){
        for(j=0;j<E;j++){
            ll x=graph[j].u; ll y=graph[j].v; ll weight=graph[j].w;
            if(dist[x]!=inf && dist[x]+weight<dist[y])
                dist[y]=dist[x]+weight;
        }
    }
}
int main()
{
    ll N,E,i,j,k,l,m,s,tc;
    scanf("%lld",&tc);
    while(tc--){
    scanf("%lld%lld",&N,&E);
    //memset(dist,0,sizeof(dist));
    for(i=0;i<E;i++){
        scanf("%lld%lld%lld",&graph[i].u,&graph[i].v,&graph[i].w);
    }

    BellmanFord(0,N,E);
    //Negative Cycle
    bool test=false;
    for(i=0;i<E;i++){
        ll x=graph[i].u; ll y=graph[i].v; ll weight=graph[i].w;
        if(dist[x]!=inf && dist[x]+weight<dist[y]){
            test=true;

        }
    }
    if(test) printf("possible\n");
    else
    printf("not possible\n");
    }
    return 0;
}
