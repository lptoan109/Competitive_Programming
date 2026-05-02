#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1005;
int a[MAXN][MAXN], s[MAXN][MAXN], n, kq = 2e18;
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("LANDDIV.INP", "r", stdin);
    freopen("LANDDIV.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= n; ++j) {
            cin >> a[i][j];
            s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + a[i][j];
        }
    }
    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < n; ++j) {
            int t1 = s[i][j];
            int t2 = s[i][n] - s[i][j];
            int t3 = s[n][j] - s[i][j];
            int t4 = s[n][n] - s[i][n] - s[n][j] + s[i][j];
            kq = min(kq, max({t1, t2, t3, t4}) - min({t1, t2, t3, t4}));
        }
    }
    cout << kq;
    return 0;
}
