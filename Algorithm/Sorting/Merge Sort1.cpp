#include<bits/stdc++.h>
using namespace std;
void Merge(int Left[],int Right[],int arr[],int nL,int nR){
        int i=0,j=0,k=0;

        while(i<nL && j<nR){
            if(Left[i]<=Right[j]){
                arr[k++]=Left[i++];
            }
            else{
                arr[k++]=Right[j++];
            }
        }

        while(i<nL){
            arr[k++]=Left[i++];
        }

        while(j<nR){
            arr[k++]=Right[j++];
        }
}
void MergeSort(int arr[],int n){
    if(n<2) return;
    int mid=n/2;
    int nL=mid;
    int nR=(n-mid);
    int Left[nL],Right[nR];
    for(int i=0;i<nL;i++) Left[i]=arr[i];
    for(int i=nL;i<n;i++) Right[i-mid]=arr[i];

    MergeSort(Left,nL);
    MergeSort(Right,nR);
    Merge(Left,Right,arr,nL,nR);

}
int main()
{
    int n,arr[100005];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    MergeSort(arr,n);
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
