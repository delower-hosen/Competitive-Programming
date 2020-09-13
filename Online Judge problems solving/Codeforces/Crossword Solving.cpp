#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
int main()
{
  int n,m,mn=inf;
  string s,t,temp,ans;
  cin>>n>>m;
  cin>>s>>t;
    for(int i=0;i<m-(n-1);i++){
        temp=t.substr(i,n);
        int cnt=0;
        for(int j=0;j<n;j++){
            if(temp[j]!=s[j])cnt++;
        }
        if(cnt<mn){
            mn=cnt;
            ans=temp;
        }
    }
    cout<<mn<<endl;
    for(int i=0;i<n;i++){
        if(s[i]!=ans[i])cout<<i+1<<' ';
    }
    cout<<endl;
  return 0;
}
