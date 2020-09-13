#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n,a,xorsum,cs=0;
    scanf("%d",&tc);
    while(tc--){
    bool ck=false;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        if(a>1)ck=true;
        if(i==0)xorsum=a;
        else xorsum^=a;
    }
    //cout<<ck<<' '<<xorsum<<endl;
    if((ck && !xorsum)||(!ck && xorsum))printf("Case %d: Bob\n",++cs);
    else printf("Case %d: Alice\n");
    }
    return 0;
}

