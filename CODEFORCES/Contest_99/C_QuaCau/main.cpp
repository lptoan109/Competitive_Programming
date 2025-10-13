#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<long long> t(n);
    for (int i = 0; i < n; ++i) {
        cin >> t[i];
    }

    sort(t.begin(), t.end());

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    if (n == 1) {
        cout << t[0] << endl;
        return 0;
    }
    if (n == 2) {
        cout << t[1] << endl;
        return 0;
    }

    vector<long long> dp(n + 1);
    dp[0] = 0;
    dp[1] = t[0];
    dp[2] = t[1];
    dp[3] = t[0] + t[1] + t[2];

    for (int i = 4; i <= n; ++i) {
        long long option1 = dp[i - 1] + t[0] + t[i - 1];
        long long option2 = dp[i - 2] + t[0] + 2 * t[1] + t[i - 1];
        dp[i] = min(option1, option2);
    }

    cout << dp[n] << endl;

    return 0;
}
