#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e3;
ll m,n, a[MAXN+5][MAXN+5], dp[MAXN+5][MAXN+5], kq;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CONGVIEN.INP", "r", stdin);
    freopen("CONGVIEN.OUT", "w", stdout);
    cin >> m >> n;
    for(ll i = 1; i<=m; ++i){
        for(ll j = 1; j<=n; ++j){
            cin >> a[i][j];
        }
    }
    for(ll i = 1; i<=m; ++i){
        for(ll j = 1; j<=n; ++j){
            if(a[i][j] == 0) dp[i][j] = 0;
            else dp[i][j] = min({dp[i][j-1], dp[i-1][j], dp[i-1][j-1]}) +1;
        }
    }
    for(ll i = 1; i<=m; ++i){
        for(ll j = 1; j<=n; ++j){
            kq = max(kq, dp[i][j]);
        }
    }
    kq*=kq;
    cout << kq;
    return 0;
}
