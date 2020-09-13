#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;
    multiset<int>Mst;
    int n,i,a,w;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        st.insert(a);
        Mst.insert(a);
    }

    for(auto x: st){
        cout<<x<<' ';
    }
    cout<<endl;

    for(auto x: Mst){
        cout<<x<<' ';
    }
    cout<<endl;

    cin>>w;
    cout<<st.count(w)<<endl;       //returns only 0 or 1..because set takes distinct element
    cout<<Mst.count(w)<<endl;

    st.erase(st.find(w));
    Mst.erase(Mst.find(w));

    for(auto x: st){
        cout<<x<<' ';
    }
    cout<<endl;

    for(auto x: Mst){
        cout<<x<<' ';
    }
    cout<<endl;

    Mst.erase(1);   //this deletes all the similar element from multiset
     for(auto x: Mst){
        cout<<x<<' ';
    }
    cout<<endl;
    return 0;
}
/*
5
1 1 2 2 3
2
*/
