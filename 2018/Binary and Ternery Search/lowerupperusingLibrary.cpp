#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::vector<int> v;
	std::vector<int>:: iterator low,upper;
	int n,q,a;
	cin>>n>>q;
	for (int i = 0; i < n; ++i)
	{
		cin>>a;
		v.push_back(a);

	}
	 low = lower_bound(v.begin(),v.end(),q);
	 upper = upper_bound(v.begin(),v.end(),q);
	cout<<"lower bound of "<<q<<" is= "<<(low-v.begin())<<endl;
	cout<<"upper bound of "<<q<<" is= "<<(upper-v.begin())<<endl;

	return 0;
}