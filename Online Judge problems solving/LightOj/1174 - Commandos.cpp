//Hints:Competitive programming books by Steven & Felix Halim
#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
#define sz 123456
#define pii pair<int,int>
vector<pii>v[sz];
vector<pii>::iterator it;
int dist1[sz],N;  //initializing distance of each node infinity
int dist2[sz];
void dijkstra(int s){
    priority_queue<pii, vector<pii>, greater<pii> >pq;
    pq.push(make_pair(0,s));    //shorted in non-increasing order w.r.t distance so that the least distance can be pop out first
    dist1[s]=0;
    while(!pq.empty()){
        pii top=pq.top(); pq.pop();
        int d=top.first; int u=top.second;
            for(it=v[u].begin();it!=v[u].end();++it){
                int v=it->first; int weight_u_v=it->second;
                if(dist1[u]+weight_u_v<dist1[v]){
                    dist1[v]=(dist1[u]+weight_u_v);
                    pq.push(make_pair(dist1[v],v));
                }
        }
    }
}
void ddijkstra(int s){
    priority_queue<pii, vector<pii>, greater<pii> >pq;
    pq.push(make_pair(0,s));    //shorted in non-increasing order w.r.t distance so that the least distance can be pop out first
    dist2[s]=0;
    while(!pq.empty()){
        pii top=pq.top(); pq.pop();
        int d=top.first; int u=top.second;
            for(it=v[u].begin();it!=v[u].end();++it){
                int v=it->first; int weight_u_v=it->second;
                if(dist2[u]+weight_u_v<dist2[v]){
                    dist2[v]=(dist2[u]+weight_u_v);
                    pq.push(make_pair(dist2[v],v));
                }
        }
    }
}
int main()
{
    int N,E,s,t,i,j,x,y,w,tc,cs=0,d;
    scanf("%d",&tc);
    while(tc--){
    scanf("%d%d",&N,&E);
    for(int i=0;i<=N;i++)dist1[i]=inf;
    for(int i=0;i<=N;i++)dist2[i]=inf;
    for(i=0;i<E;i++){
        scanf("%d%d",&x,&y);
        w=1;
        v[x].push_back(make_pair(y,w));
        v[y].push_back(make_pair(x,w));
    }
    scanf("%d%d",&s,&d);
    dijkstra(s);
    ddijkstra(d);
    //for(i=0;i<N;i++)cout<<dist1[i]<<' ';cout<<endl;
    //for(i=0;i<N;i++)cout<<dist2[i]<<' ';cout<<endl;
    int mx=-1;
    for(i=0;i<N;i++)mx=max(mx,dist1[i]+dist2[i]);
    printf("Case %d: %d\n",++cs,mx);
    for(int f=0;f<=N;f++)v[f].clear();
    }
    return 0;
}



