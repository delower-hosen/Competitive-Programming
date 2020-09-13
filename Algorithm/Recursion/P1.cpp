//Given an array of integers,write a recursive solution to print in reverse order

#include<bits/stdc++.h>
using namespace std;
void print_recursively(int arr[],int i,int n){
    if(i==n) return;
    print_recursively(arr,i+1,n);
    printf("%d ",arr[i]);
}
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    print_recursively(arr,0,n);
    return 0;
}
