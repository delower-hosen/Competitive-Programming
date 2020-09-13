#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

map<ll,ll> factors(ll n){
    map<ll,ll>f;
    for(int x=2;x*x<=n;x++){
        while(n%x==0){
            f[x]++;
            n/=x;
        }
    }
    if(n>1) f[n]++;

    return f;
}
int main()
{
    ll n;
    while(scanf("%lld",&n)){
        map<ll,ll>mp=factors(n);
        ll ans=1;
        for(auto it=mp.begin();it!=mp.end();++it)ans*=(it->second)+1;
        cout<<ans<<endl;
    }
    return 0;
}
