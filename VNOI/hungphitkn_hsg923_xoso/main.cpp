#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5, mod = 1e9+7;
int n, k, a[MAXN+5], dp[55][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i) cin >> a[i];
    for(int i = 1; i<=n; ++i) dp[1][i] = a[i];
    for(ll i = 1; i<=n; ++i){
        for(ll j = x; j>=a[i].fi; --j){
            dp[j] = max(dp[j], a[i].se+dp[j-a[i].fi]);
        }
    }
    return 0;
}
