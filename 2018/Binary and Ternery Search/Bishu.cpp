#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v,csum;
	std::vector<int>:: iterator up;
	int n,a,q;
	cin>>n;
	for (int i = 0; i < n; i++)
	{
		cin>>a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	cin>>q;
	for (int i = 0; i < q; ++i)
	{
		cin>>a;
		int res =0;
		up = upper_bound(v.begin(),v.end(),a);
		int u= up-v.begin();
		for (int i = 0; i < u; ++i)
		{
			res = res+v[i];
		}
		cout<<u<<" "<<res<<endl;
	}

	return 0;
}