#include <bits/stdc++.h>
using namespace std;

string Addition(string a,string b){
	int temp,carry = 0;
	string result;

	for(int i=a.size()-1, j=b.size()-1; i>=0 || j>=0; i--,j--){
		if(i<0) temp = carry+b[j]-'0';
		else if(j<0) temp = carry+a[i]-'0';
		else temp = carry+(a[i]-'0')+(b[j]-'0');

		carry = temp / 10;
		result+= (temp%10)+'0';
	}
	if(carry) result+='1';

	reverse(result.begin(),result.end());
	return result;

}

int main(int argc, char const *argv[])
{
	string a,b,ans;
	cin>>a>>b;
	ans = Addition(a,b);
	cout<<ans<<endl;

	return 0;
}