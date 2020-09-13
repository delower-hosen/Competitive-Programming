#include<bits/stdc++.h>
using namespace std;
struct T{
    long long product,client;
}brr[100005],arr[100005];
bool cmp(T x,T y){
    long long gg=2*(x.product);
    if(gg>=x.client) gg=x.client;
    long long hh=2*(y.product);
    if(hh>=y.client) hh=y.client;
    return gg-x.product>hh-y.product;
}
int main()
{
    long long n,f,i,j=0,sum=0,cntt=0;
    cin>>n>>f;
    for(i=0;i<n;i++){
        cin>>brr[i].product>>brr[i].client;
        if(brr[i].product>=brr[i].client){
                sum+=brr[i].client;
                cntt++;
                continue;
        }
        arr[j].product=brr[i].product;
        arr[j].client=brr[i].client;
        j++;
    }
    n=n-cntt;
    sort(arr,arr+n,cmp);
    //for(i=0;i<n;i++) cout<<arr[i].pro<<' '<<arr[i].cl<<endl;
    for(i=0;i<f;i++){
        if(2*arr[i].product>=arr[i].client) sum+=arr[i].client;
        else sum+=2*arr[i].product;
    }
    for(i=f;i<n;i++)sum+=arr[i].product;
    cout<<sum<<endl;
    return 0;
}
