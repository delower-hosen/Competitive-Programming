#include<bits/stdc++.h>
using namespace std;
int dp[100];
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    else if(dp[n]!=-1) return dp[n];
    else{
        dp[n]=(fib(n-1)+fib(n-2));
        return dp[n];
    }
}
int main()
{
    int n,i;
    memset(dp,-1,sizeof(dp));
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}
