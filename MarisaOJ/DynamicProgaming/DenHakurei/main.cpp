#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e5, mod = 1e9+7;
ll n, dp[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(ll i = 3; i<=n; ++i){
        dp[i] = (dp[i-2]+dp[i-1]+dp[i-3])%mod;
    }
    cout << dp[n];
    return 0;
}
