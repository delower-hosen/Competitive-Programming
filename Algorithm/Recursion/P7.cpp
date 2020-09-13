//Write a recursive program to compute nth fibonacci number. 1st and 2nd fibonacci numbers are 1, 1.
#include<bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n==1 or n==2)return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",fibonacci(n));
    return 0;
}
