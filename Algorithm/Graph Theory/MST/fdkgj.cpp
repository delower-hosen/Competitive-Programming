#include<bits/stdc++.h>
using namespace std;
struct T{
    int u,v;
};
int main()
{
    vector<T>V;
    int i,j,k,n,u,v;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>u>>v;
        T get;
        get.u=u;
        get.v=v;
        V.push_back(get);
    }
    for(i=0;i<V.size();i++)cout<<V[i].u<<' '<<V[i].v<<endl;
    return 0;
}
