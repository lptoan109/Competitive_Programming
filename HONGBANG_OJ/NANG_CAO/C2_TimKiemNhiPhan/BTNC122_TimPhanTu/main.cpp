#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MAXN = 1e6 + 5;
int a[MAXN], b[MAXN];

int bs(int x, int m) {
    int l = 1, r = m, vt = -1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (a[mid] <= x) {
            vt = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return vt;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) cin >> b[i];

    sort(a + 1, a + m + 1);

    for (int i = 1; i <= n; ++i) {
        int x = b[i];
        int vt = bs(x, m);
        int res;

        if (vt == -1) {
            res = a[1];
        } else if (vt == m) {
            res = a[m];
        } else {
            int left = a[vt];
            int right = a[vt + 1];
            if (abs(left - x) <= abs(right - x)) res = left;
            else res = right;
        }

        cout << res << "\n";
    }

    return 0;
}
