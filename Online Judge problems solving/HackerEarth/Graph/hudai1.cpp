#include<bits/stdc++.h>
using namespace std;
int main()
{
    int node,degree,sum=0;
    cin>>node;
    for(int i=0;i<node;i++){
        cin>>degree;
        sum+=degree;
    }
    if(sum/2==node-1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}
