#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     stack<int>sk;
     sk.push(2);
     sk.push(9);
     sk.push(7);
     while(!sk.empty()){
        cout<<sk.top()<<' ';   //LIFO-last in first out
        sk.pop();
     }
     return 0;
 }
