#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,cs=0,a,r,c;
    scanf("%d",&tc);
    while(tc--){
        int xorsum=0;
        scanf("%d%d",&r,&c);
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                int dist=(r-i)+(c-j);
                scanf("%d",&a);
                if(dist%2==1)xorsum^=a;
            }
        }
        if(xorsum)printf("Case %d: win\n",++cs);
        else printf("Case %d: lose\n",++cs);
    }
    return 0;
}
