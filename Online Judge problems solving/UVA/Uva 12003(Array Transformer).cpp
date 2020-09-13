#include<bits/stdc++.h>
using namespace std;
#define sz 100005
#define inf 0x3f3f3f3f
int BLOCK[400],arr[sz];

void init(int blockSZ){
    for(int i=0;i<=blockSZ;i++)BLOCK[i]=inf;
}

int getId(int index,int blockSZ){
    return index/blockSZ;
}

void update(int index,int value,int blockSZ){
    int id=getId(index,blockSZ);
    BLOCK[id]=min(value,BLOCK[id]);
}

/*int query(int L,int R,int blockSZ)
{
    int lid=getId(L,blockSZ);
    int rid=getId(R,blockSZ);
    if(lid==rid)
    {
        int ret=inf;
        for(int i=L; i<=R; i++)ret=min(ret,arr[i]);
        return ret;
    }
    int m1=inf,m2=inf,m3=inf;
    for(int i=L; i<(lid+1)*blockSZ; i++)m1=min(m1,arr[i]);
    for(int i=lid+1;i<rid;i++)m2=min(m2,BLOCK[i]);
    for(int i=rid*blockSZ; i<=R; i++)m3=min(m3,arr[i]);
    return min(m1,min(m2,m3));
}
*/
int main()
{
    int N,Q,u;
    scanf("%d%d%d",&N,&Q,&u);
    int blockSZ=(sqrt(N));
    init(blockSZ);

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    int L,R,v,p;
    while(Q--){
       scanf("%d%d%d%d",&L,&R,&v,&p);
       update()
    }

    return 0;
}

