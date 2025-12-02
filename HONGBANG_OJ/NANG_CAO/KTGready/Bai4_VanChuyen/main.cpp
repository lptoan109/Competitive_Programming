#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
long long n, m, k, ta, tb, a[N], b[N], f[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TRANSPORT.INP", "r", stdin);
    freopen("TRANSPORT.OUT", "w", stdout);
    cin >> n >> m >> ta >> tb >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= m; i++) cin >> b[i];
    int ptr = 0;
    f[0] = 0;
    for(int i = 1; i <= m; i++){
        while(ptr < n && a[ptr + 1] + ta <= b[i]) ptr++;
        f[i] = min(f[i - 1] + 1, ptr);
    }
    int res = 0;
    for(int i = 1; i <= m; i++){
        if(f[i] <= k) res = i;
        else break;
    }
    if(res == m) cout << -1;
    else cout << b[res + 1] + tb;
    return 0;
}
