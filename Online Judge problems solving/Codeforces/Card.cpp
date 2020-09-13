#include<bits/stdc++.h>
using namespace std;
#define read(a) scanf("%d",&a);
#define FOR(i,n) for(i=1;i<=n;i++)
map<int,char>mark;
int main()
{
    int n,a[100005],i,sum=0,tmp,j;
    read(n);
    FOR(i,n){
       read(a[i]);
       sum+=a[i];
    }
    tmp=sum/(n/2);
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(a[i]+a[j]==tmp && mark[i]!='#' && mark[j]!='#'){ cout<<i<<' '<<j<<endl;mark[i]='#'; mark[j]='#';}
        }
    }
    return 0;
}
