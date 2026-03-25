#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e4;
ll t;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("HELP.INP", "r", stdin);
    freopen("HELP.OUT", "w", stdout);
    cin >> t;
    while(t--){
        const int MAXN = 1e4;
        ll n, dp[MAXN+5], vkq[MAXN+5], a[MAXN+5];
        cin >> n;
        for(ll i = 1; i<=n; ++i){
            dp[i] = 0;
            vkq[i] = 0;
            cin >> a[i];
        }
        dp[1] = a[1];

    }
    return 0;
}
