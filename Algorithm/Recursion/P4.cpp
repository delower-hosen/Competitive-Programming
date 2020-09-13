/*Write a recursive solution to print the polynomial series for any input n:
1 + x + x2 + ................. + xn-1
*/
#include<bits/stdc++.h>
using namespace std;
void F(int i,int n){
    if(i<n){
        if(i==0)printf("1 ");
        else if(i==1)printf("+ x ");
        else printf("+ x^%d ",i);
        F(i+1,n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    F(0,n);
    printf("\n");
    return 0;
}
