#include<bits/stdc++.h>
using namespace std;
#define mx 100009
#define inf 0x3f3f3f3f
typedef long long ll;
ll arr[mx];
ll tree[3*mx]; //why? ;)

void build_tree(ll node,ll a,ll b){  //node=current node, b-e=current range
        if(a>b) return;  //out of range
        if(a==b){   //Leaf node
            tree[node]=arr[a];  //initialize value
            return;
        }
        ll mid=(a+b)/2;
        ll left=node*2;
        ll right=(node*2)+1;
        build_tree(left,a,mid);   //Init left child
        build_tree(right,mid+1,b); //Init right child
        tree[node]=(tree[left]+tree[right]);  //Init root value
}

void update_tree(ll node,ll a,ll b,ll i,ll j,ll value){ //[a,b]=current range [i,j]=to be updated
        if(a>b or a>j or b<i)  //current segment is not within range [i,j]
            return;
        if(a==b){    //Leaf node
            tree[node]+=value;
            return;
        }
        ll mid=(a+b)/2;
        ll left=node*2;
        ll right=(node*2)+1;
        update_tree(left,a,mid,i,j,value);   //updating left child
        update_tree(right,mid+1,b,i,j,value); //updating right child
        tree[node]=(tree[left]+tree[right]);  //updating root with max value

}

ll query_tree(ll node,ll a,ll b,ll i,ll j){
     if(a>b or a>j or b<i) return 0; //out of range

     if(a>=i and b<=j) //current segment is totally in range [i,j]
        return tree[node];

    ll left=node*2;
    ll right=node*2+1;
    ll mid =(a+b)/2;
    ll q1=query_tree(left,a,mid,i,j);
    ll q2=query_tree(right,mid+1,b,i,j);
    ll res=(q1+q2);
    return res;
}

int main()
{
    ll n,q,com,x,v,y,tc,cs=0;
    scanf("%lld",&tc);
    while(tc--){
    scanf("%lld%lld",&n,&q);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    build_tree(1,0,n-1);
    printf("Case %lld:\n",++cs);
    while(q--){
        scanf("%lld",&com);
        if(com==1){
            scanf("%lld",&x);
            ll tmp=query_tree(1,0,n-1,x,x);
            printf("%lld\n",tmp);
            update_tree(1,0,n-1,x,x,-tmp);
        }
        else if(com==2){
            scanf("%lld%lld",&x,&v);
            update_tree(1,0,n-1,x,x,v);
        }
        else if(com==3){
            scanf("%lld%lld",&x,&y);
            printf("%lld\n",query_tree(1,0,n-1,x,y));
        }
    }
    }
    return 0;
}

