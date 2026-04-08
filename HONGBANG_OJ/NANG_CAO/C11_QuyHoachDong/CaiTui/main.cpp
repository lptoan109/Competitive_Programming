#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e4;
ll n, w, v[MAXN+5], kl[MAXN+5], dp[MAXN+5], trace[MAXN+5];
ll kq[MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DP10.INP", "r", stdin);
    freopen("DP10.OUT", "w", stdout);
    cin >> w >> n;
    for(ll i = 1; i<=n; ++i){
        cin >> v[i];
    }
    for(ll i = 1; i<=n; ++i){
        cin >> kl[i];
    }
    for(ll i = 1; i<=w; ++i){
        for(ll j = 1; j<=n; ++j){
            if(kl[j]<=i){
                if(dp[i]<dp[i-kl[j]]+v[j]){
                    dp[i] = dp[i-kl[j]]+v[j];
                    trace[i] = j;
                }
            }
        }
    }
//    for(ll i = 1; i<=w; ++i){
//        cout << dp[i] << " ";
//    }
//    cout << "\n";
    cout << dp[w] << "\n";
    ll cur = w;
    while(cur>0){
        if(trace[cur]==0) break;
        kq[trace[cur]]++;
        cur-=kl[trace[cur]];
    }
    for(ll i = 1; i<=n; ++i){
        if(kq[i]>0) cout << kq[i] << " " << i << "\n";
    }
    return 0;
}
