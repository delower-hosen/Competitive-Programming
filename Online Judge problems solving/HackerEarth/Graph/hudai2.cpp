#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,x,y;
    cin>>t;
    while(t--){
        cin>>n;
        set<int>st;
        while(n--){
            cin>>x>>y;
            st.insert(x);
            st.insert(y);
        }
        cout<<st.size()<<endl;
    }
    return 0;
}
