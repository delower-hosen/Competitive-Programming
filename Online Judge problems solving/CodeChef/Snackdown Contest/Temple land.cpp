#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc,i,j,k,l,m;
    cin>>tc;
    while(tc--){
        cin>>n;
        int arr[n+5];
        bool validity=true;
        for(i=1;i<=n;i++)cin>>arr[i];

        if(!(n&1) or arr[1]!=1 or arr[n]!=1){cout<<"no"<<endl;continue;}

        for(i=2;i<=(n/2)+1;i++){
            if(arr[i]-arr[i-1]!=1){cout<<"no"<<endl;validity=false;break;}
        }
        if(validity){
            for(i=(n/2)+1;i<=n-1;i++){
                if(arr[i]-arr[i+1]!=1){cout<<"no"<<endl;validity=false;break;}
            }
        }
        if(validity) cout<<"yes"<<endl;
    }
    return 0;

}
