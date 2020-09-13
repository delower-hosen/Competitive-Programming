#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 0x3f3f3f3f
#define M 10000007
ll Big_Mod(ll x,ll p){
    if(p==0) return 1;
    if(p%2==0){
        ll ret=Big_Mod(x,p/2);
        return ((ret%M)*(ret%M))%M;
    }
    else return ((x%M)*(Big_Mod(x,p-1)%M))%M;
}
int main()
{
    ll x,p;
    scanf("%lld %lld",&x,&p); //determine x^p
    printf("%lld\n",Big_Mod(x,p));
    return 0;
}
