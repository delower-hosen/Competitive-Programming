#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll prime[10000005];
void sieve(ll n){
    prime[0]=1;prime[1]=1,prime[2]=0;
    for(int i=4;i<=n;i+=2)prime[i]=1;
    for(int i=3;i*i<=n;i+=2){
        if(prime[i]==0){
            for(int j=i*i;j<=n;j+=i)prime[j]=1;
        }
    }
}
int main()
{
    ll n,a;
    scanf("%lld",&n);
    sieve(n);
    while(cin>>a){
        if(!prime[a]) cout<<"prime"<<endl;
        else cout<<"Not prime"<<endl;
    }
    return 0;
}
