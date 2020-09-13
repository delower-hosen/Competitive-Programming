#include<bits/stdc++.h>
using namespace std;
int r,c,f=0;
char str[100][100];
void check(int i,int j ) {
    if( str[i][j] == 'B' ) f=1; // mario can reach bipasa
    if( i < 0 || j < 0 || i >=r || j >=c ) return;
    else if( str[i][j] == 'X' ) return;
    else {
        check(i-1,j);
        check(i,j-1);
        check(i,j+1);
        check(i+1,j);
    }
}
int main()
{
    scanf("%d%d",&r,&c);
    getchar();
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%c",&str[i][j]);
            getchar();
        }
    }
   check(0,0);
   cout<<f<<endl;
    return 0;
}
/*
4 10
MX.....XB.
..X..X.X..
...X.X.X..
.....X....
*/
