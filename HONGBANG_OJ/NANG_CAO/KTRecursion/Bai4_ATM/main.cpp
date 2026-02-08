#include <bits/stdc++.h>
using namespace std;

int n;
long long s, t[10005], best_res[10005], temp_res[10005];
int min_coins = INT_MAX;

void solve(int idx, long long current_s, int count) {
    if (count >= min_coins) return;
    if (current_s == s) {
        min_coins = count;
        for (int i = 0; i < count; i++) best_res[i] = temp_res[i];
        return;
    }
    if (idx > n || current_s > s) return;

    if (current_s + (min_coins - count) * t[idx] < s) return;

    if (current_s + t[idx] <= s) {
        temp_res[count] = t[idx];
        solve(idx + 1, current_s + t[idx], count + 1);
    }
    solve(idx + 1, current_s, count);
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

    if (min_coins == INT_MAX) cout << -1;
    else {
        cout << min_coins << "\n";
        for (int i = 0; i < min_coins; i++) cout << best_res[i] << " ";
    }

    return 0;
}
