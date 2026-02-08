#include <bits/stdc++.h>
using namespace std;

int a[9][9], cnt = 0;
bool found = false;

bool check(int r, int c, int v) {
    for (int i = 0; i < 9; i++)
        if (a[r][i] == v || a[i][c] == v) return false;
    int sr = (r / 3) * 3, sc = (c / 3) * 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (a[sr + i][sc + j] == v) return false;
    return true;
}

void solve(int r, int c) {
    if (cnt >= 1000) return;
    if (r == 9) {
        if (cnt > 0) cout << "\n";
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) cout << a[i][j] << " ";
            cout << "\n";
        }
        cnt++;
        found = true;
        return;
    }

    int nr = (c == 8) ? r + 1 : r;
    int nc = (c == 8) ? 0 : c + 1;

    if (a[r][c] != 0) {
        solve(nr, nc);
    } else {
        for (int v = 1; v <= 9; v++) {
            if (check(r, c, v)) {
                a[r][c] = v;
                solve(nr, nc);
                if (cnt >= 1000) return;
                a[r][c] = 0;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUDOKU.INP", "r", stdin);
    freopen("SUDOKU.OUT", "w", stdout);

    char ch;
    int r = 0, c = 0;
    while (cin >> ch && r < 9) {
        if (isdigit(ch)) {
            a[r][c++] = ch - '0';
            if (c == 9) { c = 0; r++; }
        }
    }

    solve(0, 0);
    if (!found) cout << "No";

    return 0;
}
