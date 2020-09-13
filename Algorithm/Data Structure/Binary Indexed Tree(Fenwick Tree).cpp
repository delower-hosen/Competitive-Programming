#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int BIT[mx];
void initBIT(int arr[],int n){
    memset(BIT,0,sizeof(BIT));
    int i,idx;
    for(i=1;i<=n;i++){
        int value=arr[i-1];
        idx=i;
        while(idx<=n){
           BIT[idx]+=value;
           idx+=(idx&(-idx));
        }
    }
}
void update(int idx,int value,int n){
    idx=idx+1;
    while(idx<=n){
        BIT[idx]+=value;
        idx+=(idx&(-idx));
    }
}
int query(int r,int n){
    int idx=r+1;
    int ans=0;
    while(idx>0){
        ans+=BIT[idx];
        idx-=(idx&(-idx));
    }
    return ans;
}
int main()
{
    int arr[mx],n,index,value;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    initBIT(arr,n);
    scanf("%d%d",&index,&value);
    update(index,value,n);
    cout<<query(2,n)<<endl;
    return 0;
}
