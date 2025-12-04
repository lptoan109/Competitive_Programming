#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 5;
int n;
long long p, a[MAXN];
vector<int> candidates;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("BAI3.INP", "r", stdin);
    freopen("BAI3.OUT", "w", stdout);
    cin >> n >> p;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (candidates.empty() || a[i] < a[candidates.back()]) {
            candidates.push_back(i);
        }
    }
    int max_dist = 0;
    for (int j = 1; j <= n; j++) {
        long long target = a[j] - p;
        auto it = lower_bound(candidates.begin(), candidates.end(), target,
            [&](int idx, long long val) {
                return a[idx] > val;
            }
        );
        if (it != candidates.end()) {
            int i = *it;
            if (i < j) {
                max_dist = max(max_dist, j - i);
            }
        }
    }
    cout << max_dist;
    return 0;
}
