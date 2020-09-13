/* Reverse the words of the sentence without reversing the character of each word
   Example:Input: This is a sunny day  Output: day sunny a is This
   Company: Enosis Solutions
*/
#include<bits/stdc++.h>
using namespace std;
string reverseSentense(string str){
    string temp,r,rstr;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]==' '){
            for(int j=temp.size()-1;j>=0;j--)r+=temp[j];
            r+=' ';
            rstr+=r;
            temp="";
            r="";
        }
        else if(i<0){
            for(int j=temp.size()-1;j>=0;j--)r+=temp[j];
            rstr+=r;
            temp="";
            r="";
        }
        else temp+=str[i];
    }
    for(int j=temp.size()-1;j>=0;j--)r+=temp[j];
    return rstr+r;
}
int main()
{
    string str;
    getline(cin,str);
    cout<<reverseSentense(str)<<endl;
    return 0;
}
