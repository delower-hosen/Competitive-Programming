#include<bits/stdc++.h>
using namespace std;
struct T{
    int cap,rem;
}arr[100009];
bool cmp(T x,T y){
    if(x.cap>y.cap)return true;
    else return false;
}
int main()
{
   int n,i;
   cin>>n;
   for(i=0;i<n;i++)cin>>arr[i].rem;
   for(i=0;i<n;i++)cin>>arr[i].cap;
   sort(arr,arr+n,cmp);
   //for(i=0;i<n;i++)cout<<arr[i].rem<<' '<<arr[i].cap<<endl;
   int cap=(arr[0].cap-arr[0].rem)+(arr[1].cap-arr[1].rem);
   int sum=0;
   for(i=2;i<n;i++)sum+=arr[i].rem;
   //cout<<cap<<' '<<sum<<endl;
   if(cap>=sum)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}
