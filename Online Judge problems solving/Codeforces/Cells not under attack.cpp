#include<bits/stdc++.h>
using namespace std;
#define read(x) scanf("%I64d",&x)
#define read2(x,y) scanf("%I64d%I64d",&x,&y)
typedef long long ll;
bool a[100005],b[100005];
int main()
{
    ll n,m,i,x,y,cnt,cnt_h=0,cnt_v=0;
    read2(n,m);
    for(i=1;i<=m;i++){
        read2(x,y);
        if(!a[x]){
            cnt_h++; a[x]=true;
        }
        if(!b[y]){
            cnt_v++;
            b[y]=true;
        }
        cnt=(cnt_h*n)+(cnt_v*n)-(cnt_h*cnt_v);
        printf("%I64d\n",(n*n)-cnt);
    }
    return 0;
}
