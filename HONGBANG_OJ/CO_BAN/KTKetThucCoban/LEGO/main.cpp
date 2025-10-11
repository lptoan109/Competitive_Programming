#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("LEGO.INP", "r", stdin);
    freopen("LEGO.OUT", "w", stdout);

    int m, n;
    cin >> m >> n;

    int h[m][n];
    long long total_faces = 0;

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> h[i][j];
            if (h[i][j] > 0) {
                total_faces += 1;
            }
        }
    }

    for (int i = 0; i < m; ++i) {
        total_faces += h[i][0];
        for (int j = 1; j < n; ++j) {
            total_faces += abs(h[i][j] - h[i][j - 1]);
        }
        total_faces += h[i][n - 1];
    }

    for (int j = 0; j < n; ++j) {
        total_faces += h[0][j];
        for (int i = 1; i < m; ++i) {
            total_faces += abs(h[i][j] - h[i - 1][j]);
        }
        total_faces += h[m - 1][j];
    }

    cout << total_faces;

    return 0;
}
