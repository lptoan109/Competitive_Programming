#include <bits/stdc++.h>
using namespace std;
int board[9][9], cnt = 0;
bool row[9][10], col[9][10], block[9][10];
bool found = false;
void print_board() {
    if (cnt > 1) cout << "\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << board[i][j] << (j == 8 ? "" : " ");
        }
        cout << "\n";
    }
}
void solve(int r, int c) {
    if (cnt >= 1000) return;
    if (c == 9){
        cnt++;
        found = true;
        print_board();
        return;
    }
    int next_r = (r + 1 == 9) ? 0 : r + 1;
    int next_c = (r + 1 == 9) ? c + 1 : c;
    if (board[r][c] != 0) {
        solve(next_r, next_c);
    } else {
        for (int v = 1; v <= 9; v++) {
            int b = (r / 3) * 3 + (c / 3);
            if (!row[r][v] && !col[c][v] && !block[b][v]) {
                board[r][c] = v;
                row[r][v] = col[c][v] = block[b][v] = true;
                solve(next_r, next_c);
                board[r][c] = 0;
                row[r][v] = col[c][v] = block[b][v] = false;
                if (cnt >= 1000) return;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("SUDOKU.INP", "r", stdin);
    freopen("SUDOKU.OUT", "w", stdout);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (!(cin >> board[i][j])) break;
            if (board[i][j] != 0) {
                int v = board[i][j];
                row[i][v] = true;
                col[j][v] = true;
                block[(i / 3) * 3 + (j / 3)][v] = true;
            }
        }
    }
    solve(0, 0);
    if (!found) cout << "No" << "\n";
    return 0;
}
