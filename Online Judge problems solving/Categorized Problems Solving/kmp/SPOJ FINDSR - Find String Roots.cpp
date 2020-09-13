#include<bits/stdc++.h>
using namespace std;
#define MAXN 100009
int F[MAXN];
int FailureFunction(char* str)
{
    int N = strlen(str);
    int j = 0;
    for(int i = 2;i<=N;i++)
    {
        while(j>0&&str[i-1]!=str[j])
            j = F[j];
        if(str[i-1]==str[j])
            j+=1;
        F[i] = j;
    }
    return F[N];
}
int main()
{
    int tc,cs;
    char str[MAXN];
    while(scanf(" %s",str)){
    if(str[0]=='.')break;
    int len=strlen(str);
    int tmp=FailureFunction(str);
    if(len%(len-tmp)==0) printf("%d\n",len/(len-tmp));
    else printf("1\n");
    }
    return 0;
}
