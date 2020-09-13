#include<bits/stdc++.h>
using namespace std;
#define mx 100009
typedef long long ll;
ll BIT[mx];
void initBIT(ll arr[],ll n){
    memset(BIT,0,sizeof(BIT));
    ll i,idx;
    for(i=1;i<=n;i++){
        ll value=arr[i-1];
        idx=i;
        while(idx<=n){
           BIT[idx]+=value;
           idx+=(idx&(-idx));
        }
    }
}
void update(ll idx,ll value,ll n){
    idx=idx+1;
    while(idx<=n){
        BIT[idx]+=value;
        idx+=(idx&(-idx));
    }
}
ll query(ll r,ll n){
    int idx=r+1;
    int ans=0;
    while(idx>0){
        ans+=BIT[idx];
        idx-=(idx&(-idx));
    }
    return ans;
}
int main()
{
    ll arr[mx],n,index,value,q,com,x,y,tc,cs=0;
    scanf("%lld",&tc);
    while(tc--){
    scanf("%lld%lld",&n,&q);
    for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
    initBIT(arr,n);
    printf("Case %lld:\n",++cs);
    while(q--){
    scanf("%lld",&com);
    if(com==1){
        scanf("%lld",&index);
        ll tmp=index-1;
        ll ans=query(index,n)-query(tmp,n);
        printf("%lld\n",ans);
        update(index,-ans,n);
    }
    else if(com==2){
        scanf("%lld%lld",&index,&value);
        update(index,value,n);
    }
    else if(com==3){
        scanf("%lld%lld",&x,&y);
        printf("%lld\n",query(y,n)-query(--x,n));
    }
    }
    }
    return 0;
}

