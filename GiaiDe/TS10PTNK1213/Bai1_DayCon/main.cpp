#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN = 1e5;
int n, k, kq = -1e18, a[MAXN+5];
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DAYCON.INP", "r", stdin);
    freopen("DAYCON.OUT", "w", stdout);
    cin >> n >> k;
    for(int i = 1; i<=n; ++i){
        int t;
        cin >> t;
        a[i] = a[i-1]+t;
    }
    for(int i = k; i<=n; ++i){
        kq = max(kq, a[i]-a[i-k]);
    }
    cout <<kq;
    return 0;
}
