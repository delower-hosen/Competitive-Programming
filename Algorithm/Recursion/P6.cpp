#include<bits/stdc++.h>
using namespace std;
int Fact(int n){
    if(n==0 or n==1) return 1;
    return n*Fact(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",Fact(n));
    return 0;
}
