#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	std::vector<int>:: iterator low,upper;
	int n,q,a;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		v.push_back(a);

	}
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		cin>>a;
		low = lower_bound(v.begin(),v.end(),a);
		upper = upper_bound(v.begin(),v.end(),a);
		int l,u;
		l = (low-v.begin());
		u = (upper-v.begin());
		if(l-1<0) cout<<"X ";
		else cout<<v[l-1]<<" ";

		if(u>n-1) cout<<"X"<<endl;
		else cout<<v[u]<<endl;
	}

	return 0;
}