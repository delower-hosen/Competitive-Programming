#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime(ll n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    ll a,n;
    while(scanf("%lld",&n)){
        if(prime(n)) printf("prime\n");
            else printf("not prime\n");
    }
    return 0;
}
