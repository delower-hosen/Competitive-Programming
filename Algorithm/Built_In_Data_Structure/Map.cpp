#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    int n,i,a,j,k,l,m;
    string str;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>str;
        mp[str]++;
    }

    //shorter way to print
    for(auto x:mp){
        cout<<x.first<<' '<<x.second<<endl;
    }
    cout<<endl;
    // Another way to print
    for(auto it=mp.begin();it!=mp.end();++it){
        cout<<it->first<<' '<<it->second<<endl;
    }
    return 0;
}
