//A deque is dynamic array whose size can be changed at both end
#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    int n,a,i;
    dq.push_back(2);
    dq.push_back(4);
    dq.push_front(1);

    for(auto x:dq){
        cout<<x<<' ';
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    cout<<dq.size()<<endl;
    for(i=0;i<dq.size();i++)cout<<dq[i]<< ' ';
    cout<<endl;
    return 0;
}
