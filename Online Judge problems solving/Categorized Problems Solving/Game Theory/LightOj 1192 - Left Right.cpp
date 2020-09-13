#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,xorsum,arr[100005],brr[100005],j,a,b,tc,cs=0;
    scanf("%d",&tc);
    while(tc--){
    scanf("%d",&n);
    j=0;
    for(int i=0;i<n;i++){
        scanf("%d%d",&a,&b);
        arr[j++]=b-a-1;
    }
    for(int i=0;i<j;i++){
        if(i==0)xorsum=arr[i];
        else xorsum^=arr[i];
    }
    if(xorsum)printf("Case %d: Alice\n",++cs);
    else printf("Case %d: Bob\n",++cs);
    }
    return 0;
}
