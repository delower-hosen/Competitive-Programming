#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,a,i;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    //after sorting the vector
    sort(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<' ';
    }
    cout<<endl;
    //after reversing the sorting vector
     reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<' ';
    }
    cout<<endl;
    //after random shuffle
    random_shuffle(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}
