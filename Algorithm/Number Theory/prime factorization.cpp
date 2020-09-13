#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> factors(ll n){
    vector<ll>f;
    for(int x=2;x*x<=n;x++){
        while(n%x==0){
            f.push_back(x);
            n/=x;
        }
    }
    if(n>1) f.push_back(n);

    return f;
}
int main()
{
    ll n;
    while(scanf("%lld",&n)){
        vector<ll>v=factors(n);
        printf("The prime factors are:\n");
        for(auto x:v){
            printf("%lld ",x);
        }
        printf("\n");
    }
    return 0;
}
