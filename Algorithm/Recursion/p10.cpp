/*Write a recursive solution to compute lcm of two integers. You must not use the formula lcm(a,b) = (a x b) / gcd(a,b).

solution:Finding lcm in "bangla method" is actually easy. Keep multiplying one number a, with i starting from 1 and whenever,
 a*i is divisible by the other number b, a*i is the lcm.
 */
#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b,int i){
    if((a*i)%b==0)return a*i;
    return lcm(a,b,i+1);
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n",lcm(a,b,1));
    return 0;
}
