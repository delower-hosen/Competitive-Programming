    #include<bits/stdc++.h>
    using namespace std;
    #define INF 0x3f3f3f
    int main()
    {
    int l = 0, r = 0, ans = INF,A[1000],n,K,i;
    map <int , int >  cnt;
    set<int>s;
    cin>>n>>K;
    for(i=0;i<n;i++)cin>>A[i];
    while ( l < n ) {
        while ( r < n && s.size() < K ) {
           s.insert(A[r]);
           cnt[A[r]]++;
           r++;
        }
        if (s.size() >=K) {
    		ans = min(ans, r-l);
    	}
        if ( cnt[A[l]] == 1 ) s.erase(A[l]);
        cnt[A[l]]--;
        l++;
    }
    if ( ans == INF ) ans = -1;

    cout << ans << endl;
    }
