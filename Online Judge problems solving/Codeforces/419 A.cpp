#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct T{
    int l,r;
}arr[2*100005];
int ck(int val,int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(val>=arr[i].l and val<=arr[i].r) cnt++;
    }
    return cnt;
}
int main()
{
    int n,k,l,a,b;
    cin>>n>>k>>l;
    for(int i=0;i<n;i++){
        cin>>arr[i].l>>arr[i].r;
    }
    for(int i=0;i<l;i++){
        cin>>a>>b;
        int cnt=0;
        for(int j=a;j<=b;j++){
            if(ck(j,n)>=k)cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
