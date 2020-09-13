#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string a,b;
	
	while(getline(cin,a)){
		int ca[128]={},cb[128]={};
		for(int i=0;a[i];i++){
			ca[a[i]]++;
		}

		getline(cin,b);

		for(int i=0;b[i];i++){
			cb[b[i]]++;
		}

		for(int i=0;i<128;i++){
			for(int j=0;j<ca[i] and j<cb[i];j++){
				cout<<(char)i;
			}
		}
		cout<<endl;
	}
	
	return 0;
}