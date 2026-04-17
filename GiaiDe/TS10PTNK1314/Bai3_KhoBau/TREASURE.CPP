#include <bits/stdc++.h>
using namespace std;
int n, dx[5] = {-1, 0, 1, 0}, dy[5] = {0, 1, 0, -1}, a[3+5][3+5];
long long kq = -1e18;
bool visited[3+5][3+5];
void backtr(int d, int c, int cnt, long long cur){
    if(cnt == 9){
        kq = max(kq, cur);
        return;
    }
    for(int i = 0; i<4; ++i){
        int nd = d+dx[i], nc = c+dy[i];
        if(nd>=1 && nd<=3 && nc>=1 && nc<=3 && !visited[nd][nc]){
            visited[nd][nc] = true;
            backtr(nd, nc, cnt+1, cur*10+a[nd][nc]);
            visited[nd][nc] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("TREASURE.INP", "r", stdin);
    freopen("TREASURE.OUT", "w", stdout);
    cin >> n;
    while(n--){
        kq = 0;
        for(int i = 1; i<=3; ++i){
            for(int j = 1; j<=3; ++j){
                cin >> a[i][j];
                visited[i][j] = false;
            }
        }
        for(int i = 1; i<=3; ++i){
            for(int j = 1; j<=3; ++j){
                visited[i][j] = true;
                backtr(i, j, 1, a[i][j]);
                visited[i][j] = false;
            }
        }
        cout << kq << "\n";
    }
    return 0;
}
