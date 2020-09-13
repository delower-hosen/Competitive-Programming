#include<bits/stdc++.h>
using namespace std;
struct T{
    int value,mark;
}Inp[100];
bool cmp ( T A  , T B )
{
    if ( A.value == B.value ) return A.mark < B.mark ;  // start mark age thakbe
    return A.value < B.value ;
}
int main()
{
    int idx=0,i,x,y,n;
    scanf("%d",&n);
    for ( i = 0 ; i < n ; i++ )
    {
        scanf("%d%d",&x,&y);
        Inp[idx].value=x;
        Inp[idx++].mark=0 ;
        Inp[idx].value = y ;
        Inp[idx++].mark = 1 ;
    }
    sort(Inp,Inp+idx,cmp);
    for(i=0;i<idx;i++){
        cout<<Inp[i].value<<' '<<Inp[i].mark<<endl;
    }
    return 0;
}
