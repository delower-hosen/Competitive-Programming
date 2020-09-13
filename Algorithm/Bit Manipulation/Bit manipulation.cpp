#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    bool f=false;
    cin>>x;
    for(i=31;i>=0;i--){
        if(x&(1<<i)) cout<<1;   //1>>k has a one(1) bit at position k and all other are zero
        else cout<<0;           //so we can use such number to access every bits of a number
    }
    cout<<endl;
    //The expression x|(1<<k)  sets 1 to the kth bit
    //The expression x|~(1<<k) sets 0 to the kth bit
    //The expression x^(1<<k) inverts the kth bit
    //The expression x&(x-1) sets the last 1 bit 0
    //The expression x&-x set all bits zero except the last bit
    //The expression x|(x-1) invers all bits after getting the last one(1)
    return 0;
}
