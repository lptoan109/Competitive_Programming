#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct Cell {
    int r, c;
    ll h;
    bool operator>(const Cell& other) const {
        return h > other.h;
    }
};

int m, n;
ll h[1005][1005];
ll h_new[1005][1005];
bool visited[1005][1005];
int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("MINING.INP", "r", stdin);
    freopen("MINING.OUT", "w", stdout);
    cin >> m >> n;
    priority_queue<Cell, vector<Cell>, greater<Cell>> pq;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> h[i][j];
            visited[i][j] = false;
            if (i == 1 || i == m || j == 1 || j == n) {
                pq.push({i, j, h[i][j]});
                h_new[i][j] = h[i][j];
                visited[i][j] = true;
            }
        }
    }
    while(!pq.empty()){
        Cell curr = pq.top();
        pq.pop();
        for(int i = 0; i < 4; i++){
            int nr = curr.r + dr[i];
            int nc = curr.c + dc[i];
            if(nr >= 1 && nr <= m && nc >= 1 && nc <= n && !visited[nr][nc]){
                visited[nr][nc] = true;
                h_new[nr][nc] = max(h[nr][nc], curr.h);
                pq.push({nr, nc, h_new[nr][nc]});
            }
        }
    }
    ll total_fill = 0;
    for(int i = 1; i <= m; i++) {
        for(int j = 1; j <= n; j++) {
            total_fill += (h_new[i][j] - h[i][j]);
        }
    }
    cout << total_fill << endl;
    return 0;
}
