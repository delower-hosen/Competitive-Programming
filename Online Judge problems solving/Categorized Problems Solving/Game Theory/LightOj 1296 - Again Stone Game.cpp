#include<bits/stdc++.h>
using namespace std;
int calculateGrundy(int n){
    if(n<3)return 0;
    if(n%2==0) return n/2;
    if(n%2!=0)return (calculateGrundy(n/2));
}
int main()
{
    int n,tc,cs=0,a;
    //memset(dp,-1,sizeof(dp));
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
