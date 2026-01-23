#include <bits/stdc++.h>
using namespace std;
long long n, s, t[10001], res[10001], best[10001];
int min_count = 1e9;
void solve(int i, long long sum, int count) {
    if (count >= min_count) return;

    if (sum == s) {
        min_count = count;
        for (int j = 1; j <= count; j++) best[j] = res[j];
        return;
    }

    if (i > n || sum > s) return;

    if (sum + t[i] <= s) {
        res[count + 1] = t[i];
        solve(i + 1, sum + t[i], count + 1);
    }

    solve(i + 1, sum, count);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("ATM.INP", "r", stdin);
    freopen("ATM.OUT", "w", stdout);

    cin >> n >> s;
    for (int i = 1; i <= n; i++) cin >> t[i];

    sort(t + 1, t + n + 1, greater<long long>());

    solve(1, 0, 0);

    if (min_count == 1e9) cout << -1 << "\n";
    else {
        cout << min_count << "\n";
        for (int i = 1; i <= min_count; i++)
            cout << best[i] << (i == min_count ? "" : " ");
        cout << "\n";
    }

    return 0;
}
