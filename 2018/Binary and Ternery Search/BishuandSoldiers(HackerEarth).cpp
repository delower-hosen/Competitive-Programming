#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,a;
	std::vector<int> v,csum;
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		v.push_back(a);
	}
	cout<<v.size()<<endl;
	return 0;
}