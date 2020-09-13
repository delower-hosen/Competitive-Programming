#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
bool valid(int sum,int n,int k){
    int g=sum/n;
    double h=double(sum-g*n)/(double)(n);
    //cout<<gg<<' '<<hh<<endl;
    if(g>=k ||(g==k-1 && h>=0.5)){
        return true;
    }
    else return false;
}
int main()
{
    int n,k,i,summ=0,b;
    cin>>n>>k;
    for(i=0;i<n;i++){
        cin>>b;
        summ+=b;
    }
    int g=summ/n;
    double h=double(summ-g*n)/(double)(n);
    if(g>=k ||(g==k-1 && h>=0.5)){
        cout<<0<<endl; return 0;
    }
    for(i=1;i<inf;i++){
        summ+=k;
        n++;
        if(valid(summ,n,k)) break;
    }
    cout<<i<<endl;
    return 0;
}
