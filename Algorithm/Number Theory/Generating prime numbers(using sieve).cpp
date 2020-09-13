#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define size 5000
ll prime[size];

void generate_prime(){
    ll i,j,num;
    prime[0]=2; prime[1]=3; prime[2]=5;

    for(i=3,num=7;i<size;i++,num++){
        while(1){
            for(j=0;prime[j]<=num/2;j++) if(num%prime[j]==0){num++;break;}
            if(prime[j]>num/2)break;
        }
        prime[i]=num;
    }
}
int main()
{
    generate_prime();
    for(int i=0;i<9;i++)printf("%lld ",prime[i]);
    printf("\n");
    return 0;
}
