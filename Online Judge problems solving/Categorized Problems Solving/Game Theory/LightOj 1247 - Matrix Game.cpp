#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,xorsum,sum,a,tc,cs=0;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d%d",&r,&c);
        for(int i=0;i<r;i++){
            sum=0;
            for(int j=0;j<c;j++){
                scanf("%d",&a);
                sum+=a;
            }
            if(i==0)xorsum=sum;
            else xorsum^=sum;
        }
        if(xorsum) printf("Case %d: Alice\n",++cs);
        else printf("Case %d: Bob\n",++cs);
    }
    return 0;
}
