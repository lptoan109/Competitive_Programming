#include <bits/stdc++.h>
using namespace std;
long long dq(int n, int k) {
    if (k == 1 || k == n) return 1;
    return dq(n - 1, k - 1) + dq(n - 1, k);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("DQ09.INP", "r", stdin);
    freopen("DQ09.OUT", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << dq(i, j) << (j == i ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
