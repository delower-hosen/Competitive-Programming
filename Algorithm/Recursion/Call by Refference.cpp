#include<bits/stdc++.h>
using namespace std;
void swapByValue(int *n,int *m){
    int tmp;
    tmp=*n;
    *n=*m;
    *m=tmp;
}
int main()
{
    int n=5,m=10;
    swapByValue(&n,&m);
    printf("%d %d\n",n,m);
    return 0;
}
