#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int nCr(int n,int r){
    if(n==r) return 1;
    if(r==0) return 1;
    if(r==1) return n;
    else if(dp[n][r]!=-1) return dp[n][r];
    else{
        dp[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
        return dp[n][r];
    }
}
int main()
{
    int n,r,i;
    memset(dp,-1,sizeof(dp));
    scanf("%d%d",&n,&r);
    printf("%d\n",nCr(n,r));
    return 0;
}
