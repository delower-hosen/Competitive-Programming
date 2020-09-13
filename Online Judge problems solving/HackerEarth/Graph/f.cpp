#include <bits/stdc++.h>
#define ll long long
using namespace std;
vector< pair<int,int>> v[1005];
int w[1005];
int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
		cin>>w[i];
	int x,y;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		v[x].push_back(make_pair(w[y],y));
		v[y].push_back(make_pair(w[x],x));
	}
	for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
        reverse(v[i].begin(),v[i].end());
        //for(int k=0;k<v[i].size();k++)cout<<v[i][k].first<<' '<<v[i][k].second<<endl;
        if(k<=v[i].size())cout<<v[i][k-1].second<<endl;
        else cout<<-1<<endl;
	}
	return 0;
}
