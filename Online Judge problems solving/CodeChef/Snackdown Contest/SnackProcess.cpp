#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,j,k,len,m,n,tc;
    string tmp;
    cin>>tc;
    while(tc--){
        string str;
        bool validity=true;
        cin>>len>>tmp;
        for(i=0;i<len;i++){
            if(tmp[i]!='.') str+=tmp[i];
        }
        //cout<<str<<endl;
        if((str.length()%2==1)or str[0]=='T' or str[str.length()-1]=='H'){
            cout<<"Invalid"<<endl;
            continue;
        }
        if(str.length()==0){
            cout<<"Valid"<<endl; continue;
        }
        for(i=0;i<str.length();i++){
            if(i%2==0 and str[i]!='H'){cout<<"Invalid"<<endl;validity=false;break;}
            else if(i%2==1 and str[i]!='T'){cout<<"Invalid"<<endl;validity=false;break;}
        }
        if(validity) cout<<"Valid"<<endl;
    }
    return 0;
}
