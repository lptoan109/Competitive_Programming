#include <bits/stdc++.h>
using namespace std;
long long f[25];

long long fib(int n) {
    if (n <= 2) return 1;
    if (f[n]) return f[n];
    return f[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("DQ10.INP", "r", stdin);
    freopen("DQ10.OUT", "w", stdout);

    int n;
    if (cin >> n) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << fib(j) << (j == i ? "" : " ");
            }
            cout << "\n";
        }
    }
    return 0;
}
