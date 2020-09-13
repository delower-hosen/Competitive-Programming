//Implement Binary Search recursively
#include<bits/stdc++.h>
using namespace std;
int Binary_search(int low,int high,int val,int arr[]){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(val>arr[mid]) return Binary_search(mid+1,high,val,arr);
    if(val<arr[mid]) return Binary_search(low,mid-1,val,arr);
    return mid;
}
int main()
{
    int n,q,a,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);
    scanf("%d",&q);
    while(q--){
        scanf("%d",&a);
      int x=Binary_search(0,n-1,a,arr);
      if(x==-1)printf("Not Found\n");
      else printf("%d\n",x);
    }
    return 0;
}
