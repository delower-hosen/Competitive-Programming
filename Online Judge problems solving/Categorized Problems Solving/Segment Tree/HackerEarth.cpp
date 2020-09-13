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

void update(int node,int b,int e,int i,int newvalue)
{
    if (i>e || i<b)
        return; //out of range
    if (b==e) { //Relevant segment
        tree[node]=newvalue;
        return;
    }
    int Left=node*2; //need to split
    int Right=node*2+1;
    int mid =(b+e)/2;
    update(Left,b,mid,i,newvalue);
    update(Right,mid+1,e,i,newvalue);
    tree[node]=min(tree[Left],tree[Right]);
}

int main()
{
    int n,q,x,y,tc,cs=0;
    char ch;
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++) scanf("%d",&arr[i]);
    init(1,1,n);
    //printf("Case %d:\n",++cs);
    while(q--){
        scanf(" %c%d%d",&ch,&x,&y);
        if(ch=='q')
        printf("%d\n",query(1,1,n,x,y));
        else update(1,1,n,x,y);
    }
    return 0;
}


