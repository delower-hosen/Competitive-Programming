#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cs=0,xorsum,arr[100005],brr[100005],n;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);
        for(int i=0;i<n;i++)scanf("%d",&brr[i]);
        for(int i=0;i<n;i++){
            if(i==0)xorsum=brr[i]-arr[i]-1;
            else xorsum^=(brr[i]-arr[i]-1);
        }
        if(xorsum)printf("Case %d: white wins\n",++cs);
        else printf("Case %d: black wins\n",++cs);
    }
    return 0;
}
