#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6;
ll n, k, a[MAXN+5], dp[MAXN+5], vtdp[MAXN+5], kq = -1e18, vmax;
vector<ll>vkq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        cin >> a[i];
    }
    dp[1] = a[1];
    for(ll i = 2; i<=n; ++i){
        ll j = i-k, maxx = -1e18, vt;
        if(j<1) j = 1;
        for(; j<i; ++j){
            if(dp[j]>=maxx){
                maxx = dp[j];
                vt = j;
            }
        }
        dp[i] = maxx+a[i];
        vtdp[i] = vt;
    }
    for(ll i = 1; i<=n; ++i){
        cout << dp[i] << " ";
        kq = max(kq, dp[i]);
    }
//    while(i>1){
//
//    }
    return 0;
}
