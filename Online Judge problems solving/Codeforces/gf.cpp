#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,d,f,g,he=0,md,temp,t1=0,t2,cnt=0;
    cin>>n>>t>>k>>d;
    t2=d;
    f=(ceil(n/k))*t;
    //cout<<f<<endl;
    while(true){
        if(t1>=d){
            t2+=t;cnt+=k;
            if(cnt>=n)break;
            t1+=t;cnt+=k;
            if(cnt>=n)break;
        }
        else{
            t1+=t;
            cnt+=k;
        }
        if(cnt>=n)break;
    }
    if(max(t1,t2)<f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
