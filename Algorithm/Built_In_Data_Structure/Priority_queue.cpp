#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int main()
{
    priority_queue<int>pq;
    pq.push(2);
    pq.push(1);
    pq.push(5);
    cout<<pq.top()<<endl; //boro gula age nibe

    priority_queue<int,vector<int>,greater<int>> pqq;  //choto gula age nite hole ei format use korte hobe
    pqq.push(2);
    pqq.push(1);
    pqq.push(5);
    cout<<pqq.top()<<endl;
    priority_queue<pii,vector<pii>,greater<pii> > pp;
    pp.push(make_pair(1,4));
    pp.push(make_pair(3,2));
    cout<<pp.top().first<<' '<<pp.top().second<<endl;
    return 0;
}
