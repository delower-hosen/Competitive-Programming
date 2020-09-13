#include<bits/stdc++.h>
using namespace std;
bool arr[10009][10009];
int main()
{
    int node,edge,i,j,x,y,q;
    cin>>node>>edge;
    for(i=0;i<edge;i++){
        cin>>x>>y;
        arr[x][y]=true;
        arr[y][x]=true;
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>x>>y;
        if(arr[x][y] or arr[y][x]) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
