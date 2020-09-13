#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n,i,j,k,a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cout<<v.back()<<endl;   //returns the last element
    v.pop_back();           //pop up the last element
    for(auto it=v.begin();it!=v.end();++it){
        cout<<*it<<' ';
    }
    cout<<endl;
     for(auto x:v){
        cout<<x<<' ';
    }
    cout<<endl;

    sort(v.begin(),v.end()); //sort in non decreasing order
    for(auto x:v){
        cout<<x<<' ';
    }
    cout<<endl;

    sort(v.rbegin(),v.rend());   //sort in non increasing order
    for(auto x:v){
        cout<<x<<' ';
    }
    cout<<endl;

    sort(v.begin(),v.end(),greater<int>());  //is also used to sort in non increasing order
    for(auto x:v){
        cout<<x<<' ';
    }
    return 0;
}

