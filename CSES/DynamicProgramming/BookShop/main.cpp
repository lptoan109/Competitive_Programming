#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3, MAXX = 1e5;
#define ll long long
#define int long long
#define fi first
#define se second
int n, x;
pair<int, int> a[MAXN+5];
int dp[MAXX+5];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> x;
    for(ll i = 1; i<=n; ++i) cin >> a[i].fi;
    for(ll i = 1; i<=n; ++i) cin >> a[i].se;
    for(ll i = 1; i<=n; ++i){
        for(ll j = x; j>=a[i].fi; --j){
            dp[j] = max(dp[j], a[i].se+dp[j-a[i].fi]);
        }
    }
    cout << dp[x];
    return 0;
}
