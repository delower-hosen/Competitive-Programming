#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[100005],brr[100005];
    bool f=false,g=false;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d",&arr[i],&brr[i]);
        if(arr[i]!=brr[i])f=true;
    }
    if(f){
        cout<<"rated"<<endl; return 0;
    }
    else {
        for(int i=0;i<n-1;i++){
            if(arr[i]<arr[i+1])g=true;
        }
    }
    if(g){
        cout<<"unrated"<<endl;return 0;
    }
    cout<<"maybe"<<endl;
    return 0;
}
