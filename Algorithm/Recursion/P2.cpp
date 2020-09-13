/*Write a recursive function to print an array in the following order.
[0] [n-1]
[1] [n-2]
.........
.........
[(n-1)/2] [n/2]
*/
#include<bits/stdc++.h>
using namespace std;
void F(int i,int n,int arr[]){
   if(i<=n){
    printf("%d %d\n",arr[i],arr[n]);
    F(i+1,n-1,arr);
   }
}
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    F(1,n,arr);
    return 0;
}
