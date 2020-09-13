#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int main()
{
    int vi,c,vh,a,l,i,sum=0;
    cin>>c>>vi>>vh>>a>>l;
    for(i=0;i<inf;i++){
        if(i==0)sum+=vi;
        else{
            sum+=min(vh,(vi+i*a))-l;
        }
        if(sum>=c)break;
    }
    cout<<i+1<<endl;
    return 0;
}
