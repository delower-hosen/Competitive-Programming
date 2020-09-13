#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,i,j,iniX=-1,iniY=-1;
    char str[1005][1005];
    scanf("%lld%lld",&n,&m);
    getchar();
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf(" %c",&str[i][j]);
            if(str[i][j]=='*' and iniY<0)iniY=j;
        }
    }
    for(i=0;i<n;i++){
        if(str[i][iniY]=='*') str[i][iniY]='.';
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]=='*' and iniX<0)iniX=i;
        }
    }
    for(i=0;i<m;i++){
        if(str[iniX][i]=='*') str[iniX][i]='.';
    }
    //cout<<iniX<<' '<<iniY<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(str[i][j]=='*'){cout<<"NO"<<endl;return 0;}
        }
    }
    long long x=(iniX<0)?1:iniX+1;
    long long y=iniY+1;
    printf("YES\n%lld %lld\n",x,y);
    /*for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%c",str[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}
