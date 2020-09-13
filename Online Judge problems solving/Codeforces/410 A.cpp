#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,i,j,cnt=0;
    string str;
    cin>>str;
    l=str.size();
    if(l==1){
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0,j=l-1;i<(l/2);i++,j--){
        if(str[i]!=str[j])cnt++;
    }
    if(cnt==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
