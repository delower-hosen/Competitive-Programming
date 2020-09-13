#include<bits/stdc++.h>
using namespace std;
#define max_n 100
#define max_w 1000
typedef long long ll;
ll n;
ll dp[max_n+1][max_w+1];
ll weight[max_n+1];
ll cost[max_n+1];
ll cap;
ll fun(ll i,ll w,ll cap)
{
    if(i==n+1) return 0;
    if(dp[i][w]!=-1) return dp[i][w];
    ll profit1=0,profit2=0;
    if(w+weight[i]<=cap){
        profit1=cost[i]+fun(i+1,w+weight[i],cap);
    }
        profit2=fun(i+1,w,cap);
        dp[i][w]=max(profit1,profit2);
        return dp[i][w];

}
int main()
{
     ll m,k,tc;
     scanf("%lld",&tc);
     while(tc--){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++){
        scanf("%lld %lld",&cost[i],&weight[i]);
    }
    scanf("%lld",&m);
    ll prof=0;
    for(k=1;k<=m;k++){
        memset(dp,-1,sizeof(dp));
        scanf("%lld",&cap);
        prof+=fun(1,0,cap);
    }
    printf("%lld\n",prof);
     }
    return 0;
}
