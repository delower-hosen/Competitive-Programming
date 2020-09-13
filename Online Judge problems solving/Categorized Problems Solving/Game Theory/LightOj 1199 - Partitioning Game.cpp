#include<bits/stdc++.h>
using namespace std;
int dp[10005];
int calculateMex(set<int> st)
{
    int Mex = 0;
    while (st.find(Mex)!=st.end())
        Mex++;

    return (Mex);
}
int calculateGrundy(int n){
    if(n<3)return 0;
    if(dp[n]!=-1) return dp[n];
    set<int>st;
    for(int i=1;i<=n/2;i++){
        if(i!=n-i && i<n-i){
            st.insert(calculateGrundy(i)^calculateGrundy(n-i));
        }
    }
    return dp[n]=calculateMex(st);
}
int main()
{
    int n,tc,a,arr[100005],cs=0;
    memset(dp,-1,sizeof(dp));
        scanf("%d",&tc);
        while(tc--){
            scanf("%d",&n);
            int xorsum=0;
            while(n--){
                scanf("%d",&a);
                xorsum^=calculateGrundy(a);
            }
            if(xorsum)printf("Case %d: Alice\n",++cs);
            else printf("Case %d: Bob\n",++cs);
        }
    return 0;
}
