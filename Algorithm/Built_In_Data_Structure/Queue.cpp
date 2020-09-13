#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(1);
    q.push(8);
    q.push(6);
    while(!q.empty()){
        cout<<q.front()<<' ';
        q.pop();
    }
    cout<<endl;
    return 0;
}
