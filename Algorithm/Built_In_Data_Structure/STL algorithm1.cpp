#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int>v;
    int i,a,n,w;
    cin>>n;  //Number of element in the vector
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    cout<<"After sorting in Ascending order:\n";
    for(auto x:v)cout<<x<<' ';cout<<endl;

    reverse(v.begin(),v.end());
    cout<<"\nAfter reversing:\n";
    for(auto x:v)cout<<x<<' ';cout<<endl;

    cout<<"\nMaximum element in the vector:\n";
    cout<<*max_element(v.begin(),v.end())<<endl;

    cout<<"\nMinimum element in the vector:\n";
    cout<<*min_element(v.begin(),v.end())<<endl;

    cout<<"\nSummation of the elements in the vector:\n";
    cout<<accumulate(v.begin(),v.end(),0)<<endl;

    cout<<"\nOccurrence of the a number\n";
    cout<<count(v.begin(),v.end(),2)<<endl;

    cout<<"\nFinding the position of a number in the vector\n";
    if(find(v.begin(),v.end(),2)!=v.end()){
             cout<<"Element found at\n";
             auto q=find(v.begin(),v.end(),2);
             cout<<q-v.begin()<<endl;
    }
    else cout<<"Element not found\n";
    return 0;
}
