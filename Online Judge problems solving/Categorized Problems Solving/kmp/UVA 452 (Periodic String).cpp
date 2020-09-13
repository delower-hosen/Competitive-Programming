#include<bits/stdc++.h>
using namespace std;

void compute_lps(string pat,int m,int lps[]){
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

int kmp(string text,string pat){
    int n=text.size();
    int m=pat.size();
    int lps[m];
    int cnt=0;
    compute_lps(pat,m,lps);
    int i=0; //index for text
    int j=0; //index for pat
    while(i<n){
        if(text[i]==pat[j]){
            i++; j++;
        }
        if(j==m){
            cnt++;
            j=lps[j-1];
        }
        else if (i<n && pat[j]!=text[i]){
            if(j!=0) j=lps[j-1];
            else
                i=i+1;
        }
    }
    return cnt;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string text;
    int tc,cs;
    scanf("%d",&tc);
     getline(cin,text);
     getline(cin,text);
     cs=tc;
    while(tc--){
        cin>>text;
        string pat="";
        for(int i=0;text[i];i++){
            pat+=text[i];
            int m=kmp(text,pat);
            if(m*(pat.size())==text.size()){
                cout<<pat.size()<<endl;break;
            }
        }
        if(--cs)printf("\n");
        getline(cin, text);
    }

    return 0;
}

