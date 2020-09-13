#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,ans,sum=0;;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=(a-1);
        ans=(sum%2==1)?1:2;
        cout<<ans<<endl;
    }
    return 0;
}
