#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[100005],total_change,n,i;
    scanf("%d%d",&n,&total_change);
    for(i=0;i<n;i++){
        scanf("%d",&coin[i]);
    }
    sort(coin,coin+n,greater<int>());
    int cnt=0;
    for(i=0;i<n;i++){
        while(total_change>=coin[i]){
            cnt++;
            total_change-=coin[i];
        }
    }
    printf("%d\n",cnt);
    return 0;
}
