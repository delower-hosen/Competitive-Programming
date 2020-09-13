#include <bits/stdc++.h>
using namespace std;

double mysqrt(double x){
	double low = 0.0;
	double high = x;
	double mid;

	while(high-low>.0000001) {
	    mid = (low+high)/2.0;
	    if(mid*mid>x) high = mid;
	    else low = mid;
	}
	return mid;
}

int main(int argc, char const *argv[])
{
	double n,square_of_n;
	cin>>n;
	square_of_n = mysqrt(n);
	cout<<square_of_n<<endl;
	return 0;
}