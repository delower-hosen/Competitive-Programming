//Hints:Competitive programming books by Steven & Felix Halim
#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
#define sz 123456
#define pii pair<int,int>
vector<pii>v[sz];
vector<int>dist(sz,inf);  //initializing distance of each node infinity

void dijkstra(int s){
    priority_queue<pii, vector<pii>, greater<pii> >pq;
    pq.push(make_pair(0,s));    //shorted in non-decreasing order w.r.t distance
    dist[s]=0;
    while(!pq.empty()){
        pii top=pq.top(); pq.pop();
        int d=top.first; int u=top.second;
        if(d==dist[u]){                         // if give wrong answer remove this(if) condition
            for(auto it:v[u]){
                int v=it.first; int weight_u_v=it.second;
                if(dist[u]+weight_u_v<dist[v]){
                    dist[v]=dist[u]+weight_u_v;
                    pq.push(make_pair(dist[v],v));
                }
            }
        }
    }
}
int main()
{
    int N,E,s,t,i,j,x,y,w;
    scanf("%d%d",&N,&E);
    for(i=0;i<E;i++){
        scanf("%d%d%d",&x,&y,&w);
        v[x].push_back(make_pair(y,w));
        v[y].push_back(make_pair(x,w));
    }
    scanf("%d",&s);
    dijkstra(s);
    printf("vertex  distance from source\n");
    for(i=1;i<=N;i++){
        printf("  %d\t\t%d\n",i,dist[i]);
    }
    return 0;
}

/*
5 6
1 2 4
1 2 5
1 4 7
4 2 8
4 5 6
2 3 3
2
*/
