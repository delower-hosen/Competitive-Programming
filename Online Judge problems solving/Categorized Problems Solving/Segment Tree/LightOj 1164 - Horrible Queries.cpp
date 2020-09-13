#include<bits/stdc++.h>
using namespace std;
#define mx 450000
#define inf 0x3f3f3f3f
typedef long long ll;
ll tree[mx],lazy[mx];

void build_tree(ll node,ll a,ll b){  //node=current node, b-e=current range
        if(a>b) return;  //out of range
        if(a==b){   //Leaf node
            tree[node]=0;  //initialize value
            return;
        }
        ll mid=(a+b)/2;
        ll left=node*2;
        ll right=(node*2)+1;
        build_tree(left,a,mid);   //Init left child
        build_tree(right,mid+1,b); //Init right child
        tree[node]=(tree[left]+tree[right]);  //Init root value
}

void update_tree(ll node,ll a,ll b,ll i,ll j,ll value){

    if(lazy[node]!=0){  //This node needs to be updated
        tree[node]+=lazy[node];  //update it
        if(a!=b){
            lazy[node*2]+=(lazy[node]/(b-a+1))*(((a+b)/2)-a+1);  //mark child as lazy
            lazy[1+(node*2)]+=(lazy[node]/(b-a+1))*(b-((a+b)/2)); //mark child as lazy
        }
        lazy[node]=0;   //Reset it
    }

    if(a>b || a>j || b<i) return; //current segment is not within range

    if(a>=i and b<=j){
        tree[node]+=value*(b-a+1);
        if(a!=b) { // Not leaf node
			ll mid=(a+b)/2;
			lazy[node*2]+=value*(mid-a+1);
			lazy[node*2+1]+=value*(b-mid);
		}
		return;
    }

    update_tree(node*2, a, (a+b)/2,i,j,value); // Updating left child
	update_tree(1+node*2,1+(a+b)/2,b,i,j,value); // Updating right child

	tree[node]=(tree[node*2]+tree[node*2+1]); // Updating root with max value
}

ll query_tree(ll node,ll a,ll b,ll i,ll j){

    if(a>b || a>j || b<i) return 0; // Out of range

    if(lazy[node]!=0){ // This node needs to be updated
		tree[node]+=lazy[node]; // Update it

		if(a!=b) {  //not leaf node.mark it's child as lazy
			lazy[node*2] +=(lazy[node]/(b-a+1))*(((a+b)/2)-a+1); // Mark child as lazy
			lazy[node*2+1] +=(lazy[node]/(b-a+1))*(b-((a+b)/2)); // Mark child as lazy
		}
		lazy[node] = 0; // Reset it
	}

	if(a>=i && b<=j) // Current segment is totally within range [i, j]
		return tree[node];

		ll q1=query_tree(node*2,a,(a+b)/2,i,j); // Query left child
	    ll q2=query_tree(1+node*2,1+(a+b)/2,b,i,j); // Query right child

	    ll res=(q1+q2); // Return final result

	    return res;
}

int main()
{
    ll n,tc,m,com,a,b,val,cs=0;
        scanf("%lld",&tc);
        while(tc--){
        scanf("%lld%lld",&n,&m);
        memset(lazy,0,sizeof(lazy));
        memset(tree,0,sizeof(tree));
        build_tree(1,0,n-1);
        printf("Case %lld:\n",++cs);
        while(m--){
            scanf("%lld",&com);
            if(com==0){
                scanf("%lld%lld%lld",&a,&b,&val);
                update_tree(1,0,n-1,a,b,val);
            }
            else{
                scanf("%lld%lld",&a,&b);
                printf("%lld\n",query_tree(1,0,n-1,a,b));
            }
        }
    }
    return 0;
}

