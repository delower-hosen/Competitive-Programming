#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,m,i,j,k,a,y,x,value;
    vector<ll>v;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
   for(i=0;i<m;i++){
    cin>>x>>y>>value;
    vector<ll>temp=v;
    x-=1; value-=1;
    sort(temp.begin()+x,temp.begin()+y);
    if(v[value]==temp[value])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
   }

    return 0;
}
