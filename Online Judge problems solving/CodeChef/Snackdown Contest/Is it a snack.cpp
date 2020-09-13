#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    char str[3][509];
    scanf("%d",&n);
    int sn=0;
    for(i=0;i<2;i++){
        for(j=0;j<n;j++){
            scanf(" %c",&str[i][j]);
            if(str[i][j]=='#') sn++;
        }
    }
    cout<<sn<<endl;
    return 0;
}
