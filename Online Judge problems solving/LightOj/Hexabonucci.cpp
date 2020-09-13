#include<bits/stdc++.h>
using namespace std;
#define MOD 10000007
#define maxn 10010
long long dp[maxn],a,b,c,d,e,f;
long fib(long long n){
    if(n==0) return a;
    if(n==1) return b;
    if(n==2) return c;
    if(n==3) return d;
    if(n==4) return e;
    if(n==5) return f;
    else if(dp[n]!=-1) return dp[n];
    else{
        dp[n]=(fib(n-1)+fib(n-2)+fib(n-3)+fib(n-4)+fib(n-5)+fib(n-6))%MOD;
        return dp[n];
    }
}
int main()
{
    long long n,i,t;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
            memset(dp,-1,sizeof(dp));
        scanf("%lld%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f,&n);
      printf("Case %d: %d\n",i,fib(n)%MOD);
    }

    return 0;
}
