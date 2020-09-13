#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int q, int len){
	int begin = 0, end= len-1;
	int index = -1,mid;
	while(begin<=end) {
	    mid = (begin+end)/2;
	    if(arr[mid]==q){
	    	index = mid;
	    	break;
	    }
	    else if(q>arr[mid]) begin = mid+1;
	    else if(q<arr[mid]) end = mid-1;
	}
	return index;
}

int main(int argc, char const *argv[])
{
	int arr[10009];
	int n,q,sum=0;
	cin>>n>>q;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int index = BinarySearch(arr,q,n);
	if(index == -1){
		cout<<"Not found!"<<endl;
		return 0;
	}
	cout<<index<<endl;

	return 0;
}
