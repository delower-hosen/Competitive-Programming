#include <bits/stdc++.h>
using namespace std;

string add(string a,string b)
{
    string ans;
    int tmp,carry=0;
    for(int i=a.size()-1,j=b.size()-1; i>=0||j>=0; i--,j--)
    {
        if(i<0) tmp=carry+b[j]-'0';
        else if(j<0) tmp=carry+a[i]-'0';
        else tmp=carry+(a[i]-'0')+(b[j]-'0');

        carry=tmp/10;
        ans+=(tmp%10)+'0';
    }
    if(carry) ans+='1';
    reverse(ans.begin(),ans.end());
    return ans;
}


string Multiplication(string a,string b)
{
    string ans,str;
    int tmp,carry;
    for(int i=a.size()-1; i>=0; i--)
    {
        str="";
        for(int k=0; k<a.size()-i-1; k++) str+='0';
        carry=0;
        for(int j=b.size()-1; j>=0; j--)
        {
            tmp=carry+(a[i]-'0')*(b[j]-'0');
            carry=tmp/10;
            tmp=tmp%10;
            str+=tmp+'0';
        }
        if(carry) str+=carry+'0';
        reverse(str.begin(),str.end());
        if(i==a.size()-1) ans=str;
        else ans=add(ans,str);
    }
    return ans;
}



int main(int argc, char const *argv[])
{
    string a,b,ans;
    while(getline(cin,a)){
        getline(cin,b);
    if(a[0]=='0' or b[0]=='0'){cout<<0<<endl;return 0;}
    ans = Multiplication(a,b);
    cout<<ans<<endl;
}
    return 0;
}