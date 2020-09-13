/*Write a recursive solution to evaluate the previous polynomial for any given x and n.
Like, when x=2 and n=5, we have 1 + x + x2 + ................. + xn-1 = 31
*/
#include<bits/stdc++.h>
using namespace std;
int F(int i,int x,int n){
    if(n==0) return 1;
    if(i>=n)return 0;
        return (int)pow(x,i)+F(i+1,x,n);
}
int main()
{
    int n,x,res;
    scanf("%d%d",&x,&n);
    res=F(0,x,n);
    printf("%d\n",res);
    return 0;
}

