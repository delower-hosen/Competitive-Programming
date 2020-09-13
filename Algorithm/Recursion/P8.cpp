#include<bits/stdc++.h>
using namespace std;
bool F(int i,int n){
    if(n==1) return true;
    if(i>sqrt(n)) return false;
    if(i<=sqrt(n)){
        if(n%i==0) return true;
        F(i+1,n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    if(F(2,n)) printf("Not prime\n");
    else printf("Prime\n");
    return 0;
}
