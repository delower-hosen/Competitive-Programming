#include<bits/stdc++.h>
using namespace std;
#define Mx 1000
#define Inf 0x3f3f3f3f
struct abc
{
    int value , mark ; // mark 0 for start point , 1 for end
} Inp [ Mx + Mx ] ;
bool cmp ( abc A  , abc B )
{
    if ( A.value == B.value ) return A.mark < B.mark ;  // start mark age thakbe
    return A.value < B.value ;
}

int main()
{
    int n , i  , x , y , idx = 0;
    cin >> n ;
    for ( i = 0 ; i < n ; i++ )
    {
        cin >> x >> y ;
        Inp[idx].value = x ;
        Inp[idx++].mark = 0 ;
        Inp[idx].value = y ;
        Inp[idx++].mark = 1 ;
    }
    sort(Inp , Inp+idx , cmp );
        int Ans = -Inf ;
    int cur = 0 ; // eita count korbe koyta program ekhon run korche
    for ( i = 0 ; i < idx ; i++ )
    {
        if( Inp[i].mark == 0 ) // mane notun program start hoiche
            cur++;
        else cur-- ; // program off hoiche
        Ans = max(Ans , cur );
    }
    printf("%d\n",Ans);
    return 0 ;

}
