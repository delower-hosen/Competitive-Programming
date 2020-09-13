#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m;
	cin>>n>>m;
	int a[n],b[m],c[m+n];
	    for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<m;i++) cin>>b[i];

			int i=0,j=0,k=0;
		while(i<n and j<m) {
		    if(a[i]<=b[j]){
		    	c[k++]=a[i++];
		    }
		    else{
		    	c[k++]=b[j++];
		    }
		}
		while(i<n) {
		    c[k++]=a[i++];
		}
		while(j<m) {
		    c[k++]=b[j++];
		}

		for(int i=0;i<m+n;i++) cout<<c[i]<<" ";
			cout<<endl;

	return 0;
}