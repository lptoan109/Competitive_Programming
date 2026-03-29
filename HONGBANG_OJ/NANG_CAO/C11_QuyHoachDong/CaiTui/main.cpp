#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e4;
ll n, w, v[MAXN+5], kl[MAXN+5], dp[MAXN+5][MAXN+5];
vector<ll> kq;
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
            if(kl[j]>i){
                dp[i][j] = dp[i][j-1];
                continue;
            }
            dp[i][j] = max(dp[i][j-1], dp[i-kl[j]][j]+v[j]);
        }
    }
    for(ll i = 1; i<=w; ++i){
        for(ll j = 1; j<=n; ++j) cout << dp[i][j] << " ";
        cout << "\n";
    }
    ll i = w, j = n;
    while(i>0 && j>0){
        if(dp[w][j] == dp[i][j-1]){
            j--;
        }
        else{
            kq.push_back(j);
            i-=kl[j];
        }
    }
    cout << dp[w][n] << "\n";
    sort(kq.begin(), kq.end());
    for(ll k:kq){
        cout << k << " ";
    }
    return 0;
}
