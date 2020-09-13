#include<bits/stdc++.h>
using namespace std;
int x,y,d;
void extendedEuclid(int a, int b)
{

    if (b == 0)
    {
        x = 1;
        y = 0;
        d = a;
        return;
    }
    extendedEuclid(b,a%b);
    int x1 = y;
    int y1 = x-(a/b)*y;
    x = x1;
    y = y1;

}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;   //ax+by=c
    extendedEuclid(a,b);
    if(c%d!=0) {cout<<"No integral solution"<<endl;return 0;} //if gcd(a,b) doesn't divide constant c.then their is no solution
    cout<<x<<' '<<y<<endl;
    return 0;
}
