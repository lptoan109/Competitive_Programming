#include <bits/stdc++.h>

using namespace std;

bool check(long long k, long long n, long long w, long long h) {
    if (k < w || k < h) {
        return false;
    }
    long long count_w = k / w;
    long long count_h = k / h;

    unsigned __int128 total_fit = (unsigned __int128)count_w * count_h;

    return total_fit >= n;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("BANGKHEN.INP", "r", stdin);
    freopen("BANGKHEN.OUT", "w", stdout);

    long long w, h, n;
    cin >> w >> h >> n;

    long long left = 1;
    long long right = max(w, h) * n;
    long long ans = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        if (check(mid, n, w, h) || check(mid, n, h, w)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
