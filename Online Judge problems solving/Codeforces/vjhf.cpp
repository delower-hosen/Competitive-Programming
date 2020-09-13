#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,i,j,kl;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>kl;
        v.push_back(kl);
    }
    sort(v.begin()+1,v.begin()+5);
    for(auto h:v) cout<<h<<endl;
    return 0;
}
