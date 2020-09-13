#include<bits/stdc++.h>
using namespace std;
map<int,int>dp;
int calculateMex(set<int> st)
{
    int Mex = 0;
    while (st.find(Mex)!=st.end())
        Mex++;

    return (Mex);
}
int calculateGrundy(int n){
    if(n==1) return 0;
    if(dp[n]!=-1) return dp[n];
    set<int>st;
    for(int i=1;i<=n/2;i++){
        st.insert(calculateGrundy(n-i));
    }
    return dp[n]=calculateMex(st);
}
int main()
{
    int n,tc,cs=0,a;
    for(int i=1;i<=1000009;i++)dp[i]=-1;
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
