#include<bits/stdc++.h>
using namespace std;
int main()
{
    //__builtin_clz(x):returns the number of zero at the beginning of the number (leading zero)
    //__builtin_ctz(x):returns the number of zero at the end of the number  (trailing zero)
    //__builtin_popcount(x):returns the number of 1's in the  the number
    //__builtin_parity(x):The parity (even or odd) of the number of 1's

    int x = 5328; // 00000000000000000001010011010000

    cout << __builtin_clz(x) << "\n"; // 19
    cout << __builtin_ctz(x) << "\n"; // 4
    cout << __builtin_popcount(x) << "\n"; // 5
    cout << __builtin_parity(x) << "\n"; // 1
    return 0;
}
