#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];

	int i=0;
	for(int j=1;j<n;j++){
		if(a[i]!=a[j]){
			
			a[++i]=a[j];
		}
	}
	int newLength = i+1;
	for(int k=0;k<newLength;k++)cout<<a[k]<<" "; cout<<endl;
	return 0;
}