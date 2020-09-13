#include<bits/stdc++.h>
using namespace std;
char text[1000010],pat[1000010];
void compute_lps(char* pat,int m,int lps[]){
    int len=0;
    lps[0]=0;
    int i=1;
    while(i<m){
        if(pat[i]==pat[len]){
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0) len=lps[len-1];
            else{
                lps[i]=0;
                i++;
            }
        }
    }
}

void kmp(char* text,char* pat){
    int n=strlen(text);
    int m=strlen(pat); bool flag=true;
    int lps[m];
    compute_lps(pat,m,lps);
    int i=0; //index for text
    int j=0; //index for pat
    while(i<n){
        if(text[i]==pat[j]){
            i++; j++;
        }
        if(j==m){
            printf("%d\n",i-j);
            j=lps[j-1];
        }
        else if (i<n && pat[j]!=text[i]){
            if(j!=0) j=lps[j-1];
            else
                i=i+1;
        }
    }
    if(flag) printf("\n");
}
int main()
{
    int n;
    while(scanf("%d %s %s",&n,pat,text)!=EOF){
    kmp(text,pat);
    }
    return 0;
}

