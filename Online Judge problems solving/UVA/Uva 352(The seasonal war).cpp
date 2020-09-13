#include<bits/stdc++.h>
using namespace std;
int mark[30][30],r,c;
char grid[30][30];
void floodfill(int i, int j)
{
    //Base case
    if(i<0 || j<0 || i>=r || j>=r)
    return;

    if(grid[i][j]=='1' && mark[i][j]==0)
    {
        mark[i][j]=1;
        grid[i][j]='+';

        floodfill(i+1,j);
        floodfill(i-1,j);
        floodfill(i,j+1);
        floodfill(i,j-1);
        floodfill(i+1,j+1);
        floodfill(i+1,j-1);
        floodfill(i-1,j+1);
        floodfill(i-1,j-1);
    }

}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int cnt,i,j,t=1;
    while(scanf("%d",&r)!=EOF){
     memset(grid,'0',sizeof(grid));
     getchar();
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
            scanf("%c", &grid[i][j]);
        getchar();
    }
    memset(mark,0,sizeof(mark));
    cnt=0;
    for(i=0; i<r; i++)
    {
        for(j=0; j<r; j++)
        {
            if(grid[i][j]=='1' and mark[i][j]==0)
            {
                cnt++;
                floodfill(i,j);
            }
        }
    }
    printf("Image number %d contains %d war eagles.\n",t++,cnt);
    }
    return 0;
}

