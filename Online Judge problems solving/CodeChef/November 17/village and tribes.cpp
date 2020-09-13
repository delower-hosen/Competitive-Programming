#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    string str;
    cin>>t;
    for(int j=0;j<t;j++){
    int cntA=0,cntB=0,tempA=0,tempB=0;
    cin>>str;
    char first='#',last='#';
    for(int i=0;str[i];i++){
        if(first=='#' and str[i]=='.')continue;
        else if(first=='#' && str[i]!='.'){
            first=str[i];
            if(first=='A')cntA+=1;
            else cntB+=1;
        }
        else if(first!='#' && str[i]=='.'){
            if(first=='A')tempA++;
            else tempB++;
        }
        else if(first!='#' && str[i]!='.'){
            if(first==str[i] && first=='A'){cntA+=tempA+1;tempA=0;tempB=0;}
            else if(first==str[i] && first=='B'){cntB+=tempB+1;tempA=0;tempB=0;}
            else if(first!=str[i]){
                first=str[i];
                if(first=='A')cntA+=1;
                else cntB+=1;
                tempA=0;tempB=0;
            }
        }
    }
    cout<<cntA<<' '<<cntB<<endl;
    }
    return 0;
}
