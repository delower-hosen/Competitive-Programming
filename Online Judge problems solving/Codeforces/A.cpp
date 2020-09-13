#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l,r,i;
    cin>>l>>r;
    i=__gcd(l,r);
    if(i==1)cout<<i+1<<endl;
    else
    cout<<i<<endl;
    return 0;
}
