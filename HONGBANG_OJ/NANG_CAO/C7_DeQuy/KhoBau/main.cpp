#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
int n;
int a[105][105];
bool visited[105][105];
long long max_val = -INF;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};

void Try(int x, int y, long long current_sum) {
    if (x == n && y == n) {
        max_val = max(max_val, current_sum);
        return;
    }
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= n && !visited[nx][ny]) {
            visited[nx][ny] = true;
            Try(nx, ny, current_sum + a[nx][ny]);
            visited[nx][ny] = false;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("DQ12.INP", "r", stdin);
    freopen("DQ12.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            visited[i][j] = false;
        }
    }
    visited[1][1] = true;
    Try(1, 1, a[1][1]);
    cout << max_val;
    return 0;
}
