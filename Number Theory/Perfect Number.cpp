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
        /*ll ans=1;
        for(int u=2;u<=n;u++){
            if(arr[u]) ans*=(pow(u,arr[u]+1)-1)/(u-1);
        }
        printf("%lld\n",ans);*/

        ll sum_of_factors=1;
        for(auto u:st){
            sum_of_factors*=(pow(u,arr[u]+1)-1)/(u-1);
        }
        printf("sum of factors=%lld\n",sum_of_factors);
        if(sum_of_factors==2*n)printf("%lld is a perfect number\n",n);  //perfect number,if n==sum_of_factors-n
        else printf("%lld is not a perfect number\n",n);
    }
    return 0;
}

