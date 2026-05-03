#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e3;
#define int long long
#define fi first
#define se second
int n, h[MAXN+5], s[MAXN+5], x;
pair<int, int> dp[MAXN+5];
long long kq;
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("BT.OUT", "w", stdout);
    cin >> n >> x;
    for(int i = 1; i<=n; ++i) cin >> h[i];
    for(int i = 1; i<=n; ++i) cin >> s[i];
    if(h[1]<=x){
        dp[1].fi = h[1];
        dp[1].se = s[1];
    }
    for(int i = 2; i<=n; ++i){
        if(h[i]>x){
            continue;
        }
        for(int j = 1; j<i; ++j){
            if(dp[j].fi+h[i]<=x){
                if(dp[j].se+s[i]>=dp[i].se){
                    dp[i].fi = dp[j].fi+h[i];
                    dp[i].se = dp[j].se+s[i];
                }
            }
        }
        if(dp[i].fi==0 && h[i]<=x){
            dp[i] = {h[i], s[i]};
        }
        kq = max(kq, dp[i].se);
    }
    for(int i = 1; i<=n; ++i) cout << dp[i].fi << " ";
    cout << "\n";
    for(int i =1 ; i<=n; ++i) cout << dp[i].se << " ";
    cout << "\n";
    cout << kq;
    return 0;
}
