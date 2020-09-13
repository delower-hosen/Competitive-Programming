#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,rev=0;
	cin>>n;
	while(n) {
	    int x=n%10;
	    n/=10;
	    rev= rev*10 + x;
	}
	cout<<rev<<endl;
	return 0;
}