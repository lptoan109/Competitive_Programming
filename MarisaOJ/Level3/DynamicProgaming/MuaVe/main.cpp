#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5;
ll n, t[MAXN+5], r[MAXN+5], dp[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(ll i = 1; i<=n; ++i) cin >> t[i];
    for(ll i = 2; i<=n; ++i) cin >> r[i];
    if(n==1){
        cout << t[1];
        return 0;
    }
    dp[1] = t[1];
    dp[2] = min(r[2], (dp[1]+t[2]));
    for(ll i = 3; i<=n; ++i){
        dp[i] = min((r[i]+dp[i-2]), (dp[i-1]+t[i]));
    }
    cout << dp[n];
    return 0;
}
