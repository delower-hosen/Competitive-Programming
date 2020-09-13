#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<int>v;
    int n,i,a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    auto low=lower_bound(v.begin(),v.end(),20);
    auto up=upper_bound(v.begin(),v.end(),20);

    cout<<"The lower bound is at position: "<<low-v.begin()<<endl;
    cout<<"The upper bound is at position: "<<up-v.begin()<<endl;
    return 0;
}
