#include<bits/stdc++.h>
using namespace std;
int main()
{
    char Text[100],Pat[100];
    gets(Text);  //Enter the text  string
    gets(Pat);   //Enter he pattern string to be searched

    for(int i=0;Text[i];i++){
        for(int j=0;Pat[j];j++){
            if(Text[i+j]!=Pat[j])break;  //if not match,break inner loop
            if(j==strlen(Pat)-1) printf("Pattern found at %d",i);
        }
    }
    return 0;
}
