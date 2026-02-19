#include <bits/stdc++.h>
using namespace std;
int n, a[65];
void out(int k) {
    for (int i = 1; i <= k; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void solve(int i, int s, int m) {
    for (int v = m; v <= n- s; v++) {
        a[i] = v;
        if (s + v == n) {
            if (i > 1) out(i);
        } else {
            solve(i + 1, s + v, v);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("CAKE.INP", "r", stdin);
    freopen("CAKE.OUT", "w", stdout);
    cin >> n;
    solve(1, 0, 1);
    return 0;
}
