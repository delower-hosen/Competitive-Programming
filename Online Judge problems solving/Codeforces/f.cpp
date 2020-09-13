#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t="";
    cin>>s;
    for(int i=0;s[i];i++){
        t+=toupper(s[i]);
    }
    cout<<t<<endl;
    return 0;
}
