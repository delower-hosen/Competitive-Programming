//Hints:Competitive programming books by Steven & Felix Halim
#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
#define sz 123456
#define pii pair<int,int>
vector<pii>v[sz];
vector<pii>::iterator it;
int dist[sz];  //initializing distance of each node infinity

void dijkstra(int s){
    priority_queue<pii, vector<pii>, greater<pii> >pq;
    pq.push(make_pair(0,s));    //shorted in non-increasing order w.r.t distance so that the least distance can be pop out first
    dist[s]=0;
    while(!pq.empty()){
        pii top=pq.top(); pq.pop();
        int d=top.first; int u=top.second;
            for(it=v[u].begin();it!=v[u].end();++it){
                int v=it->first; int weight_u_v=it->second;
                if(dist[u]+weight_u_v<dist[v]){
                    dist[v]=(dist[u]+weight_u_v);
                    pq.push(make_pair(dist[v],v));
                }
        }
    }
}
int main()
{
    int N,E,s,t,i,j,x,y,w,tc,cs=0;
    scanf("%d",&tc);
    while(tc--){
    scanf("%d%d",&N,&E);
    for(i=0;i<=N;i++)dist[i]=inf;
    for(i=0;i<E;i++){
        scanf("%d%d%d",&x,&y,&w);
        v[x].push_back(make_pair(y,w));
        v[y].push_back(make_pair(x,w));
    }

    dijkstra(1);
    printf("Case %d: ",++cs);

        if(dist[N]==inf)printf("Impossible\n");
        else printf("%d\n",dist[N]);

    for(int f=0;f<=N;f++)v[f].clear();
    }
    return 0;
}


