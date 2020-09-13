#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int key, int n){
	int begin=0, end=n-1, index =-1;
	int mid;

	while(begin<=end) {
	    mid = (begin+end)/2;
	    if(arr[mid]==key){
	    	index = mid;
	    	end = mid-1;
	    }
	    else if(key<arr[mid]) end = mid-1;
	    else if( key>arr[mid]) begin = mid+1;
	}
	return begin;
}

int main(int argc, char const *argv[])
{
	int arr[10009];
	int n,key;
	cin>>n>>key;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	int lowerBound = BinarySearch(arr,key,n);
	cout<<lowerBound<<endl;
	return 0;
}