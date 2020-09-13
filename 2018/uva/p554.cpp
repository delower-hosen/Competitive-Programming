#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	std::map<string, int> dictionary;
	std::map<string, int>:: iterator it;
	string str,d,en;
	while(cin>>str && str[0]!='#') {
	    dictionary[str]=0;
	}
	for(it=dictionary.begin();it!=dictionary.end();++it){
		cout<<it->first<<" "<<it->second<<endl;
	}

	/*getline(cin,en);
	cout<<en<<endl;*/
	
	return 0;
}