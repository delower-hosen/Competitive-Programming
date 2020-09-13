#include<bits/stdc++.h>
using namespace std;
#define mx 100005
#define inf 0x3f3f3f3f
int arr[mx];
int tree[3*mx],lazy[3*mx];

void build_tree(int node,int a,int b){  //node=current node, b-e=current range
        if(a>b) return;  //out of range
        if(a==b){   //Leaf node
            tree[node]=arr[a];  //initialize value
            return;
        }
        int mid=(a+b)/2;
        int left=node*2;
        int right=(node*2)+1;
        build_tree(left,a,mid);   //Init left child
        build_tree(right,mid+1,b); //Init right child
        tree[node]=max(tree[left],tree[right]);  //Init root value
}

void update_tree(int node,int a,int b,int i,int j,int value){

    if(lazy[node]!=0){  //This node needs to be updated
        tree[node]+=lazy[node];  //update it
        if(a!=b){
            lazy[node*2]+=lazy[node];  //mark child as lazy
            lazy[1+(node*2)]+=lazy[node]; //mark child as lazy
        }
        lazy[node]=0;   //Reset it
    }

    if(a>b || a>j || b<i) return; //current segment is not within range

    if(a>=i and b<=j){
        tree[node]+=value;
        if(a!=b) { // Not leaf node
			lazy[node*2] += value;
			lazy[node*2+1] += value;
		}
		return;
    }

    update_tree(node*2, a, (a+b)/2,i,j,value); // Updating left child
	update_tree(1+node*2,1+(a+b)/2,b,i,j,value); // Updating right child

	tree[node]=max(tree[node*2],tree[node*2+1]); // Updating root with max value
}

int query_tree(int node,int a,int b,int i,int j){

    if(a>b || a>j || b<i) return -inf; // Out of range

    if(lazy[node]!=0){ // This node needs to be updated
		tree[node]+=lazy[node]; // Update it

		if(a!=b) {  //not leaf node.mark it's child as lazy
			lazy[node*2] += lazy[node]; // Mark child as lazy
			lazy[node*2+1] += lazy[node]; // Mark child as lazy
		}
		lazy[node] = 0; // Reset it
	}

	if(a>=i && b<=j) // Current segment is totally within range [i, j]
		return tree[node];

		int q1=query_tree(node*2,a,(a+b)/2,i,j); // Query left child
	    int q2=query_tree(1+node*2,1+(a+b)/2,b,i,j); // Query right child

	    int res=max(q1,q2); // Return final result

	    return res;
}

int main()
{
    int n,q,tc;
    scanf("%d",&tc);
    while(tc--){
        memset(lazy,0,sizeof(lazy));
        memset(tree,0,sizeof(tree));
        char str[mx];
        scanf(" %s",str);
        for(int i=0;str[i];i++) arr[i+1]=str[i]-'0';
        n=strlen(str);
        build_tree(1,1,n);
    }
    return 0;
}
