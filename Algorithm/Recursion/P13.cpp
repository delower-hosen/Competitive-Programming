#include<bits/stdc++.h>
using namespace std;
int F(int i,int n,int val,int arr[]){
    if(i>=n) return -1;
    if(i<n){
        if(arr[i]==val) return i;
        F(i+1,n,val,arr);
    }
}
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int q,val;
    scanf("%d",&q);
    while(q--){
        scanf("%d",&val);
        int x=F(0,n,val,arr);
        if(x==-1)printf("Not Found\n");
        else printf("%d\n",x);
    }
    return 0;
}
