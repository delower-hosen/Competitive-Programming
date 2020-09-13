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
    ll N,E,i,j,k,l,m,s;
    scanf("%lld%lld",&N,&E);
    for(i=0;i<E;i++){
        scanf("%lld%lld%lld",&graph[i].u,&graph[i].v,&graph[i].w);
    }
    scanf("%lld",&s);
    BellmanFord(s,N,E);
    //Negative Cycle
    for(i=0;i<E;i++){
        ll x=graph[i].u; ll y=graph[i].v; ll weight=graph[i].w;
        if(dist[x]!=inf && dist[x]+weight<dist[y]){
            printf("Negative Cycle Detected!!!\n");
            return 0;
        }
    }
    //shortest path
    printf("vertex     distance from source\n");
    for(i=1;i<=E;i++){
       printf("%  lld\t\t%lld\n",i,dist[i]);
    }
    return 0;
}
/*
6 6
4 5 7
3 4 1
1 3 2
1 4 4
4 6 5
2 3 10
1
*/
/*
3 3
1 2 3
2 3 2
3 1 -10
1
*/
