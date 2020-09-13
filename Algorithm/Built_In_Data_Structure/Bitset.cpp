#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*bitset<10>s;
    s[0]=1;
    s[2]=1;
    s[3]=1;
    cout<<s[0]<<endl;
    cout<<s[1]<<endl;*/

    bitset<10>bs(string("0010011011")); // from right to left..start from 0
    bitset<10>as(string("1010010010"));
    cout<<bs[0]<<endl;
    cout<<bs[4]<<endl;
    cout<<bs[5]<<endl;

    cout<<bs.count()<<endl;   //returns number of 1 in bitset
    cout<<(as&bs)<<endl;
    cout<<(as|bs)<<endl;
    cout<<(as^bs)<<endl;

    return 0;
}
