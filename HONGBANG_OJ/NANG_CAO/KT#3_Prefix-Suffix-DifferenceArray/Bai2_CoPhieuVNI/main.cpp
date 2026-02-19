#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5;
long long n, q, t,a[MAXN+5], m[MAXN+5], f[MAXN];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("VNI.INP", "r", stdin);
    freopen("VNI.OUT", "w", stdout);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    m[n+1] = 0;
    f[n+1] = 0;
    for(int i = n; i >= 1; i--) {
        m[i] = max(a[i], m[i+1]);
        f[i] = f[i+1] + (m[i] - a[i]);
    }
    cin >> q;
    while(q--){
        cin >> t;
        cout << f[t] << "\n";
    }
    return 0;
}
