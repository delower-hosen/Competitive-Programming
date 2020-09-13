#include<bits/stdc++.h>
using namespace std;
int mark[110][110],r,c;
char grid[110][110];
void floodfill(int i, int j)
{
    //Base case
    if(i<0 || j<0 || i>r-1 || j>c-1)
    return;

    if(grid[i][j]=='.' && mark[i][j]==0)
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
    int cnt=0,i,j;
    scanf("%d%d",&r,&c);
     getchar();
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            scanf("%c", &grid[i][j]);
        getchar();
    }
    memset(mark,0,sizeof(mark));
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(grid[i][j]=='.' and mark[i][j]==0)
            {
                cnt++;
                floodfill(i,j);
            }
        }
    }
    printf("\nNumber of dotted region=%d\n\n",cnt);
    printf("The new grid after replacing dot with + is\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%c",grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*
12 25
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@@@@@@@@@@@@@@@@@@@@
@@@@@@*************@@@@@@
@@@@@@*....*     ..@@@@@@
@@@@@@*....*   ....@@@@@@
@.@@@@*....*      .@@@@@@
@@@@@@*....********@@..@@
@@@@@@*...........*@@@...
@@@@@@*...........*@@@..@
@@@@@@*************@@@@.@
@@@@@@@@@.....@@@@@@@@@@@
@@@@@@@@@.....@@@@@@@@@@@
*/
