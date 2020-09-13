#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int>vect;
    int n,i,a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        vect.push_back(a);
    }

    sort(vect.begin(),vect.end());
    cout<<"After sorting in Ascending order\n";
    for(auto x:vect) cout<<x<<' '; cout<<endl;

    vect.erase(vect.begin()+1);
    cout<<"After removing 1th element\n";
    for(auto x:vect)cout<<x<<' '; cout<<endl;

     vect.erase(unique(vect.begin(),vect.end()),vect.end());
    cout<<"After removing duplicate elements\n";
    for(auto x:vect)cout<<x<<' '; cout<<endl;

    next_permutation(vect.begin(),vect.end());
    cout<<"After performing next permutation:\n";
    for(auto x:vect) cout<<x<<' '; cout<<endl;

    prev_permutation(vect.begin(),vect.end());
    cout<<"After performing prev permutation:\n";
    for(auto x:vect) cout<<x<<' '; cout<<endl;

    return 0;
}
