#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int arr[mx];
int tree[mx*3];

void init(int node,int b,int e)
{
    if (b==e) {
        tree[node]=arr[b];
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid =(b+e)/2;
    init(Left,b,mid);
    init(Right,mid+1,e);
    tree[node]=min(tree[Left],tree[Right]);
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return mx; //Out of range
    if (b >= i && e <= j)
        return tree[node]; //Relevant Segment
    int Left = node * 2; //need to split
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return min(p1,p2); //sum of left and right side
}

int main()
{
    int n,q,x,y,tc,cs=0;
    scanf("%d",&tc);
    while(tc--){
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    init(1,1,n);
    printf("Case %d:\n",++cs);
    while(q--){
        scanf("%d%d",&x,&y);
        printf("%d\n",query(1,1,n,x,y));
    }
    }
    return 0;
}

/*
7 3
4 -9 3 7 1 0 2
*/
