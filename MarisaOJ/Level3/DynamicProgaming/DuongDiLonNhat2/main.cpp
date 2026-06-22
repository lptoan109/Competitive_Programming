#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e3;
ll n, a[MAXN+5][MAXN+5], dp[MAXN+5][MAXN+5];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //freopen("NHAP.INP", "r", stdin);
    cin >> n;
    for(ll i = 1; i<=n; ++i){
        for(ll j = 1; j<=n; ++j) cin >> a[i][j];
    }
    dp[1][1] = a[1][1];
    for(ll i = 2; i<=n; ++i){
        dp[1][i] = dp[1][i-1] + a[1][i];
        dp[i][1] = dp[i-1][1] + a[i][1];
    }
    for(ll i = 2; i<=n; ++i){
        for(ll j = 2; j<=n; ++j){
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])+a[i][j];
        }
    }
//    for(ll i = 1; i<=n; ++i){
//        for(ll j = 1; j<=n; ++j) cout << dp[i][j] << " ";
//        cout << "\n";
//    }
    cout << dp[n][n];
    return 0;
}
