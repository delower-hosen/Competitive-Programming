#include <bits/stdc++.h>
using namespace std;

int compare(string a,string b){
	if(a.size()>b.size()) return 1;
	if(a.size()<b.size()) return -1;
	if(a[0]>b[0]) return 1;
	else if(a[0]<b[0]) return -1;
	else return 0;
}

string Subtraction(string a,string b){
	int temp,borrow=0;
	string result;
	for(int i=a.size()-1,j=b.size()-1;i>=0;i--,j--){
		if(j<0) temp = a[i]-'0'-borrow;
		else temp = (a[i]-'0')-(b[j]-'0')-borrow;

		if(temp<0){
			temp+=10;
			borrow=1;
		}
		else borrow=0;
		result+=temp+'0';
	}
	reverse(result.begin(),result.end());
	return result;

}

string remove_leading_zeros(string str)
{
    int zero=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='0') zero++;
        else break;
    }
    if(zero==str.size()) return "0";
    return str.substr(zero);   //first a joto tomo position porjonto 0
}                              // toto tomo position theke shes porsjonto
								//substring print korsi r ki

int main(int argc, char const *argv[])
{
	string a,b,ans;
	cin>>a>>b;
	int ck = compare(a,b);
	if(!ck){cout<<0<<endl;return 0;}
	if(ck == -1) swap(a,b);

	ans = Subtraction(a,b);
	ans = remove_leading_zeros(ans);
	if(ck==-1) cout<<"-"+ans<<endl;
	else
	cout<<ans<<endl;
	return 0;
}