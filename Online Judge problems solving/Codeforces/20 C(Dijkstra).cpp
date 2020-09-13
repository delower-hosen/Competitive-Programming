#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 100000000000000
#define sz 123456
#define pii pair<int,int>
vector<pii>v[sz];
vector<ll>dist(sz,inf);
map<ll,ll>parent;
void dijkstra(ll s){
    priority_queue<pii, vector<pii>, greater<pii> >pq;
    pq.push(make_pair(0,s));
    dist[s]=0;
    while(!pq.empty()){
        pii top=pq.top(); pq.pop();
        ll d=top.first; ll u=top.second;

            for(auto it:v[u]){
                ll v=it.first; int weight_u_v=it.second;
                if(dist[u]+weight_u_v<dist[v]){
                    dist[v]=dist[u]+weight_u_v;
                    parent[v]=u;
                    pq.push(make_pair(dist[v],v));
                }
        }
    }
}
int main()
{
    ll N,E,s,t,i,j,x,y,w;
    scanf("%lld%lld",&N,&E);
    for(i=0;i<E;i++){
        scanf("%lld%lld%lld",&x,&y,&w);
        v[x].push_back(make_pair(y,w));
        v[y].push_back(make_pair(x,w));
    }
    dijkstra(1);
    if(dist[N]==inf){printf("-1\n");return 0;}
    vector<ll>path;
    ll r=N;
    while(true){
        if(parent[r]==1){path.push_back(r);break;}
        path.push_back(r);
        r=parent[r];
    }
    path.push_back(1);
    reverse(path.begin(),path.end());
    for(auto it:path){
        printf("%lld ",it);
    }
    printf("\n");
    return 0;
}

