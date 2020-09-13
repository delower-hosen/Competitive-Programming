#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	int max_so_far=0, max_end_here=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

		for(int i=0;i<n;i++){
			max_end_here+=arr[i];
			if(max_so_far<max_end_here)max_so_far = max_end_here;
			if(max_end_here<0)max_end_here=0;
		}

		cout<<max_so_far<<endl;
	return 0;
}