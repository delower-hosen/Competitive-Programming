//Euler function gives the number of co-prime/relatively prime numbers to n between 1 and n
//two numbers a & b are said co-prime if gcd(a,b)=1
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[100005];
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
        set<ll>st;
        memset(arr,0,sizeof(arr));
        for(auto x:v){
            arr[x]++;
            st.insert(x);
        }

        ll phi=1;
        for(auto u:st){
            phi*=(pow(u,arr[u]-1))*(u-1);
        }
        cout<<phi<<endl;
    }
    return 0;
}

