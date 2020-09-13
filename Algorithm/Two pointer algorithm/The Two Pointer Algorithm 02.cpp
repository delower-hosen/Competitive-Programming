//Given an array having N integers,find the contiguous subarray having sum as great as possible but not greater than M
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
 typedef long long ll;

ll A[MAX];

int main()
{
    int n,M;
	ll sum = 0;
    cin >>n>>M;

    for ( int i = 0; i < n; i++ ) cin >> A[i];

    int l = 0, r = 0;
	ll ans = 0;

    while ( l < n ) {
       while ( r < n && sum + A[r] <= M ) {
           sum += A[r];
           r++;
       }
       ans = max(ans, sum);
       sum -= A[l];
       l++;
    }

    cout << ans << endl;
    return 0;
}
