#include<bits/stdc++.h>
using namespace std;
void funny(){
    char ch;
    scanf("%c",&ch);
    if(ch!='\n') funny();
    printf("%c",ch);
}
int main()
{
    int n;
    funny();
    cout<<endl;
    return 0;
}
