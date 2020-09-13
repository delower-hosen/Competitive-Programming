#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100005],inc=0,i,n,con;
    bool f=true,f1=true,conf=true;
    cin>>n;
    for(i=0;i<n;i++)cin>>arr[i];
    for(i=0;i<n-1;i++){
       if(arr[i+1]<=arr[i]){inc=i;f1=false;break;}
    }
    if(f1){
        cout<<"NO"<<endl; return 0;
    }
    //cout<<inc<<endl;
    for(i=inc+1;i<n;i++){
        if(arr[i]!=arr[inc]){con=i;conf=false;break;}
    }
    //cout<<"conf="<<conf<<endl;
    if(conf){
        cout<<"YES"<<endl;
        return 0;
    }
    //cout<<con<<endl;
    con--;
    //if(con-inc==1)con=inc;

    for(i=con;i<n-1;i++){
        if(arr[i+1]>=arr[i]){
            f=false;
            break;
        }
    }
    if(f)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
