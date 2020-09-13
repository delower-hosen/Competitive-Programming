#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int tc;
    cin>>tc;
    getchar();
    getchar();
    while(tc--){
        char str[100];
        int cnt=0;
        map<string,int>mp;
        while(gets(str)){
            if(strlen(str)==0) break;
            mp[str]++;
            cnt++;
        }
        for(auto it=mp.begin();it!=mp.end();++it){
            double tmp=((double)(it->second))/((double)(cnt))*100;
            cout<<it->first<<" "<<setprecision(4)<<fixed<<tmp<<endl;
        }
        if(tc) printf("\n");
    }
    return 0;
}
