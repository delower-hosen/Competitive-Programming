#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define read(x) scanf("%I64d",&x)
#define read2(x,y) scanf("%I64d%I64d",&x,&y);

int main()
{
    ll arr[100005],a,b,c,d,i,j,k,l,m,n,sum1=0,cnt1=0,cnt2=0,sum2=0;
    char ch;
    char str[100005];
    read2(a,b);
    ll r=1;
    while(a){
        if(a-r<0)break;
        a-=r; r++;r++;
        cnt1++;
    }
    l=2;
    while(b){
        if(b-l<0)break;
        b-=l; l++;l++;
        cnt2++;
    }
    if(cnt1>cnt2) cout<<"Valera"<<endl;
    else cout<<"Vladik"<<endl;
    return 0;
}


