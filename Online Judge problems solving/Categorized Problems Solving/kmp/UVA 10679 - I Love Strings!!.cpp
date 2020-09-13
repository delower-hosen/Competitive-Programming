#include<bits/stdc++.h>
using namespace std;

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

bool kmp(char* text,char* pat){
    int n=strlen(text);
    int m=strlen(pat);
    int lps[m];
    compute_lps(pat,m,lps);
    int i=0; //index for text
    int j=0; //index for pat
    while(i<n){
        if(text[i]==pat[j]){
            i++; j++;
        }
        if(j==m){
            //printf("pattern found at idex %d\n",i-j);
            return true;
            j=lps[j-1];
        }
        else if (i<n && pat[j]!=text[i]){
            if(j!=0) j=lps[j-1];
            else
                i=i+1;
        }
    }
    return false;
}
int main()
{
    char text[100009],pat[1009];
    int tc,q;
    scanf("%d",&tc);
    while(tc--){
        scanf("%s",text);
        scanf("%d",&q);
        while(q--){
            scanf("%s",pat);
            if(kmp(text,pat))printf("y\n");
            else printf("n\n");
        }
    }
    return 0;
}

