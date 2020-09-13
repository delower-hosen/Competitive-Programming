#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n;
    map<char,char>mp;
    string first,second,third;
    cin>>first>>second>>third;
    for(int i=0;first[i];i++){
        mp[first[i]]=second[i];
    }
    for(int i=0;first[i];i++){
        mp[toupper(first[i])]=toupper(second[i]);
    }
    for(int i=0;third[i];i++){
        if(isalpha(third[i]))cout<<mp[third[i]];
        else cout<<third[i];
    }
    cout<<endl;
    return 0;
}
/*
twccpqzavb2017
*/
