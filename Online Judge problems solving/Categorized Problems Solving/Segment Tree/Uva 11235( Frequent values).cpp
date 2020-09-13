#include<bits/stdc++.h>
using namespace std;
#define mx 100005
int arr[mx];
int brr[mx];
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
    tree[node]=max(tree[Left],tree[Right]);
}

int query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return -1; //Out of range
    if (b >= i && e <= j)
        return tree[node]; //Relevant Segment
    int Left = node * 2; //need to split
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    int p1 = query(Left, b, mid, i, j);
    int p2 = query(Right, mid + 1, e, i, j);
    return max(p1,p2); //sum of left and right side
}
map<int,int>mp;
int main()
{
    int n,q,x,y;
    while(scanf("%d",&n),n){
        scanf("%d",&q);
        for(int i=1;i<=n;i++){
            scanf("%d",&brr[i]);
            mp[brr[i]]++;
        }
        for(int i=1;i<=n;i++)arr[i]=mp[brr[i]];
        //for(int i=1;i<n;i++) cout<<arr[i]<<' ';cout<<endl;
        init(1,1,n);
        while(q--){
            scanf("%d%d",&x,&y);
            printf("%d\n",query(1,1,n,x,y));
        }
    }
    return 0;
}

/*
7
4 -9 3 7 1 0 2
*/

