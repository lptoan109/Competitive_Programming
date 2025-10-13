#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //freopen("TIMSO.INP", "r", stdin);
    //freopen("TIMSO.OUT", "w", stdout);

    long long n, k;
    cin >> n >> k;

    vector<long long> d(n);
    for (int i = 0; i < n; ++i) {
        cin >> d[i];
    }

    if (n < 2) {
        cout << 0 << endl;
        return 0;
    }

    long long max_profit = 0;
    long long max_sell_val = d[0];

    for (int j = 1; j < n; ++j) {
        long long current_buy_val = d[j] + k * j;
        long long current_profit = max_sell_val - current_buy_val;

        max_profit = max(max_profit, current_profit);

        long long current_sell_val = d[j] + k * j;
        max_sell_val = max(max_sell_val, current_sell_val);
    }

    cout << max_profit << endl;

    return 0;
}
