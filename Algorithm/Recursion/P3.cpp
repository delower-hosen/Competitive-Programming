/*write a recursive program to remove all odd integers from an array.you must not use any extra array or print anything in the
function.just read the input,call a recursive function and then print the array in main().
*/

#include<bits/stdc++.h>
using namespace std;
void F(int i,int j,int *n,int arr[]){
    if(i==*n){
        *n=j;     //resize n
        return;
    }
    if(arr[i]%2==0) arr[j++]=arr[i];
    F(i+1,j,n,arr);
}
int main()
{
    int n,arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    F(0,0,&n,arr);
    for(int i=0;i<n;i++)printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
