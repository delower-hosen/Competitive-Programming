#include<bits/stdc++.h>
using namespace std;
int Merge(int Left[],int Right[],int arr[],int nL,int nR){
        int i=0,j=0,k=0,inv=0;

        while(i<nL && j<nR){
            if(Left[i]<=Right[j]){
                arr[k++]=Left[i++];
            }
            else{
                arr[k++]=Right[j++];
                inv+=(nL-i);
            }
        }

        while(i<nL){
            arr[k++]=Left[i++];
        }

        while(j<nR){
            arr[k++]=Right[j++];
        }
        return inv;
}
int MergeSort(int arr[],int n){
    if(n<2) return 0;
    int mid=n/2;
    int nL=mid;
    int nR=(n-mid);
    int Left[nL],Right[nR];
    for(int i=0;i<nL;i++) Left[i]=arr[i];
    for(int i=nL;i<n;i++) Right[i-mid]=arr[i];

    int x=MergeSort(Left,nL);
    int y=MergeSort(Right,nR);
    int z=Merge(Left,Right,arr,nL,nR);
    return x+y+z;
}
int main()
{
    int n,arr[100005];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    cout<<"Number of inversions:"<<MergeSort(arr,n)<<endl;
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
