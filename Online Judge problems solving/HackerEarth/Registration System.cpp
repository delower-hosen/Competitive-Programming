#include<bits/stdc++.h>
using namespace std;
map<string,char>mark;
map<string,int>mp;
int main()
{
    int n,i,j,k,l,m;
    string str;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>str;
        if(mark[str]!='#'){
            cout<<str<<endl;
            mark[str]='#';
            mp[str]++; continue;
        }
        else{
            cout<<str<<mp[str]-1<<endl;
            mp[str]++;
        }
    }
    return 0;
}
