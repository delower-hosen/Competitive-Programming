#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,arr[100005],i,j,l,m,candy=0,cur=0,f=false;
    cin>>n>>k;
    for(i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(i=1;i<=n;i++){
       cur=+arr[i];
       if(cur<=8)candy+=cur;
       else{
        candy+=8;
        cur-=8;
       }

       if(candy>=k){f=true;break;}
    }
    if(f)cout<<i<<endl;
    else cout<<-1<<endl;
    return 0;
}
