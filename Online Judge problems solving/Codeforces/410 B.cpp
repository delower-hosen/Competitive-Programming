#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    vector<string>v,tmp;
    string str;
    for(i=0;i<n;i++){
        cin>>str;
        v.push_back(str);
    }
    tmp=v;
    for(i=0;i<n;i++){
       cout<<tmp[i]<<endl;
    }
    return 0;
}
