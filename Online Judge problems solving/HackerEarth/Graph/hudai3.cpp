#include<bits/stdc++.h>
using namespace std;
vector<int>v[10009];
struct t{
    int r,c;

};
bool cmp(t a,t b){

   if(a.c==b.c)
    return a.r>b.r;
    else  return a.c>b.c;


}
int main()
{
    int n,m,k,arr[100009],x,i,y;
    cin>>n>>m>>k;
    for(i=1;i<=n;i++){
        cin>>x;
        arr[i]=x;
    }
    for(i=1;i<=m;i++){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(i=1;i<=n;i++){
        int sz=v[i].size();
        t s[100009];
        for(int j=0;j<sz;j++){
            s[j].r=v[i][j];
            s[j].c=arr[v[i][j]];
        }
        sort(s,s+(sz),cmp);
        //for(int k=0;k<sz;k++) cout<<s[k].r<<' '<<s[k].c<<endl;
        if(k<=sz)
        cout<<s[sz-k].r<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
