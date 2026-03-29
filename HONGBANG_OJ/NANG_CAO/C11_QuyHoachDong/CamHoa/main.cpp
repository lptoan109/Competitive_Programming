#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e4;
ll k, n;
vector<vector<ll>> a,dp;
vector <ll> kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DP09.INP", "r", stdin);
    freopen("DP09.OUT", "w", stdout);
    cin >> k >> n;
    for(ll i = 1; i<=k; ++i){
        vector<ll> ta1, ta2;
        for(ll j = 1; j<=n; ++j){
            ll t;
            cin >> t;
            ta1.push_back(t);
            ta2.push_back(0);
        }
        a.push_back(ta1);
        dp.push_back(ta2);
    }
    for(ll i = 1; i<=k; ++i){
        for(ll j = 1; j<=n; ++j){
            if(j>=i) dp[i][j] = max(dp[i][j-1], dp[i-1][j-1]+a[i][j]);
        }
    }
//    for(ll i = 1; i<=k; ++i){
//        for(ll j = 1; j<=n; ++j) cout << dp[i][j] << " ";
//        cout << "\n";
//    }
    cout << dp[k][n] << "\n";
    ll i = k, j = n;
    while(i>=1 && j>=1){
//        if(j>=i && dp[i][j] == dp[i-1][j-1]+a[i][j]){
//            kq.push_back(j);
//            i--;
//            j--;
//        }
//        else if(dp[i][j] == dp[i][j-1]) j--;
        if(dp[i][j] == dp[i][j-1]) j--;
        else if(j>=i && dp[i][j] == dp[i-1][j-1]+a[i][j]){
            kq.push_back(j);
            i--;
            j--;
        }
    }
    sort(kq.begin(), kq.end());
    for(ll h:kq){
        cout << h << " ";
    }
    return 0;
}
